class Solution {
  public:
    void DFS(vector<vector<int>>& adj, int u, vector<int> &ans, vector<int> &visited){
        if(visited[u] == true){
            return;
        }
        
        visited[u] = true;
        ans.push_back(u);
        
        for(int &v: adj[u]){
            if(!visited[v]){
                DFS(adj, v, ans, visited);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj){
      int V = adj.size();    
      vector<int> ans;
      vector<int> visited(V, false);
      
      DFS(adj,0, ans, visited);
      
      return ans;
    }
};
