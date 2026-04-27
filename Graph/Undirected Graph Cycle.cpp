// Approach => Using BFS
//T.C. = O(V+E)
class Solution {
  public:
    bool isCycleBFS(vector<vector<int>>& adj, int u, vector<bool> &visited){
        queue<pair<int,int>> q;
        
        q.push({u, -1});
        visited[u] = true;
        
        while(!q.empty()){
            pair<int,int> P = q.front();
            q.pop();
            
            int u2 = P.first;
            int parent = P.second;
            
            for(int &v : adj[u2]){
                if(visited[v] == false){
                    q.push({v, u2});
                    visited[v] = true;
                }
                else if(v != parent){
                    return true;
                }
            }
        }
        
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
       vector<vector<int>> adj(V);
       
       for(auto &e: edges){
           int u = e[0];
           int v = e[1];
           
           adj[u].push_back(v);
           adj[v].push_back(u);
       }
       
       vector<bool> visited(V, false);
       
       for(int i =0;i<V;i++){
         if(!visited[i] && isCycleBFS(adj, i, visited)){
           return true;   
         }
       }
       
       return false;
    }
};




// Approach => Using DFS
//T.C. = O(V+E)
class Solution {
  public:
    bool isCycleDFS(vector<vector<int>>& adj, int u, vector<bool> &visited, int parent){
        visited[u] = true;
        
        for(int &v : adj[u]){
            if(v == parent){
                continue;
            }
            
            if(visited[v] == true){
                return true;
            }
            if(isCycleDFS(adj, v, visited, u)){
                return true;
            }
        }
        
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
       vector<vector<int>> adj(V);
       
       for(auto &e: edges){
           int u = e[0];
           int v = e[1];
           
           adj[u].push_back(v);
           adj[v].push_back(u);
       }
       
       vector<bool> visited(V, false);
       
       for(int i =0;i<V;i++){
         if(!visited[i] && isCycleDFS(adj, i, visited, -1)){
           return true;   
         }
       }
       
       return false;
    }
};
