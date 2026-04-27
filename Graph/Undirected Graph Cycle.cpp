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
