class Solution {
  public:
    void BFS(vector<vector<int>> &adj, int u, vector<int> &ans, vector<int>&visited){
        queue<int> que;
        
        que.push(u);
        visited[u] = true;
        ans.push_back(u);
        
        while(!que.empty()){
            int u = que.front();
            que.pop();
            
            for(int &v : adj[u]){
                if(!visited[v]){
                    que.push(v);
                    visited[v] = true;
                    ans.push_back(v);
                }
            }
        }
    }
    vector<int> bfs(vector<vector<int>> &adj) {
        int V = adj.size();
        vector<int>ans;
        vector<int> visited(V, false);
        
        BFS(adj, 0, ans, visited);
        
        return ans;
    }
};
