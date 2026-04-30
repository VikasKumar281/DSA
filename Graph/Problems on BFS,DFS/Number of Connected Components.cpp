class Solution {
  public:
    void DFS(vector<vector<int>> &adj, int u, vector<bool> &visited){
        visited[u] = true;

        for(int &v: adj[u]){
            if(!visited[v]){
                DFS(adj, v, visited);
            }
        }

    }
    int countConnected(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        
        for(auto &e: edges){
            int u = e[0];
            int v = e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        int count = 0;
        vector<bool> visited(V, false);
        for(int i = 0;i < V;i++){
            if(!visited[i]){
                DFS(adj, i, visited);
                count++;
            }
        }

        return count;
    }
};
