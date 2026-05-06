// Using BFS ------------------------------------------------------------------------------------------------------>
class Solution {
  public:
    bool checkBipartiteBFS(vector<vector<int>> &adj, int curr, vector<int> &color, int currColor){
        queue<int> que;
        que.push(curr);
        color[curr] = currColor;

        while(!que.empty()){
            int u = que.front();
            que.pop();
            
            for(int &v : adj[u]){
              if(color[v] == color[u]){
                return false;
              }
              if(color[v] == -1){
                color[v] = 1 - color[u];
                que.push(v);
              }
            }
        }

        return true;
    }
    bool isBipartite(int V, vector<vector<int>> &edges) {
        vector<vector<int>> adj(V);
        for(auto &e: edges){
            int u = e[0];
            int v = e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> color(V, -1);
      
        // green color => 1;
        // grey color => 0;
      
        for(int i =0;i<V;i++){
            if(color[i] == -1){
                if(checkBipartiteBFS(adj, i, color, 1) == false){
                    return false;
                }
            }
        }

        return true;      
    }
};








// Using DFS ------------------------------------------------------------------------------------------------------>
class Solution {
  public:
    bool checkBipartiteDFS(vector<vector<int>> &adj, int curr, vector<int> &color, int currColor){
        color[curr] = currColor;

        for(int &v : adj[curr]){
            int colorV;
            if(color[v] == color[curr]){
                return false;
            }
            if(color[v] == -1){
                colorV = 1 - currColor;
                if(checkBipartiteDFS(adj, v, color, colorV) == false){
                  return false;
                }
            }
        }

        return true;
    }
    bool isBipartite(int V, vector<vector<int>> &edges) {
        vector<vector<int>> adj(V);
        for(auto &e: edges){
            int u = e[0];
            int v = e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> color(V, -1);
      
        // green color => 1;
        // grey color => 0;
      
        for(int i =0;i<V;i++){
            if(color[i] == -1){
                if(checkBipartiteDFS(adj, i, color, 1) == false){
                    return false;
                }
            }
        }

        return true;      
    }
};
