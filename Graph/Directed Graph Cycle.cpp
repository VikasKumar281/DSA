// Approach => Using BFS (Kahn's Algorithm is used) ------------------------------------------------------------------------>
// Time Complexity : O(V + E)
// Space Complexity : O(V + E)
class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        vector<vector<int>> adj(V);
        
        for(auto &e : edges){
            int u = e[0];
            int v = e[1];
            
            adj[u].push_back(v);
        }
        
        vector<int> inDegree(V, 0);
        
        for(int u =0;u<V;u++){
            for(auto &v : adj[u]){
                inDegree[v]++;
            }
        }
        
        queue<int> que;
        for(int i = 0;i<V;i++){
            if(inDegree[i] == 0){
                que.push(i);
            }
        }
        
        int count = 0;
        while(!que.empty()){
            count++;
            int u = que.front();
            que.pop();
            
            for(int &v: adj[u]){
                inDegree[v]--;
                
                if(inDegree[v] == 0){
                    que.push(v);
                }
            }
        }
        
        if(count == V){
            return false;
        }
        
        return true;
    }
};






// Approach => Using DFS
// Time Complexity : O(V + E)
// Space Complexity : O(V + E)
class Solution {
  public:
    bool isCycleDFS(vector<vector<int>> &adj, int u, vector<bool> &visited, vector<bool> &inRecursion){
        visited[u] = true;
        inRecursion[u] = true;
        
        for(int &v: adj[u]){
            if(visited[v] == false && isCycleDFS(adj, v, visited, inRecursion)){
                return true;
            }
            else if(inRecursion[v] == true){
                return true;
            }
        }
        
        
        inRecursion[u] = false;
        return false;
    } 
    bool isCyclic(int V, vector<vector<int>> &edges) {
        vector<vector<int>> adj(V);
        
        for(auto &e : edges){
            int u = e[0];
            int v = e[1];
            
            adj[u].push_back(v);
        }
        
        vector<bool> visited(V, false);
        vector<bool> inRecursion(V, false);
        
        for(int i =0;i<V;i++){
            if(!visited[i] && isCycleDFS(adj, i, visited, inRecursion)){
                return true;
            }
        }
        
        return false;
    }
};
