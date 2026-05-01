//Approach => Using BFS ------------------------------------------------------------------------------------>
class Solution {
public:
    void BFS(vector<vector<int>> &adj, int u, vector<bool> &visited){
        queue<int> que;

        que.push(u);
        visited[u] = true;

        while(!que.empty()){
            int curr = que.front();
            que.pop();

            for(int &v : adj[curr]){
                if(!visited[v]){
                    BFS(adj, v, visited);
                }
            }
        }

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<vector<int>> adj(V);
        
        for(int i=0;i<V;i++){
            for(int j =0;j<V;j++){
                if(isConnected[i][j] == 1 && i != j){
                  adj[i].push_back(j);
                  adj[j].push_back(i);
                }
            }
        }
        
        int count = 0;
        vector<bool> visited(V, false);
        for(int i = 0;i < V;i++){
            if(!visited[i]){
                BFS(adj, i, visited);
                count++;
            }
        }

        return count;
    }
};





//Approach => Using BFS ------------------------------------------------------------------------------------>
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
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<vector<int>> adj(V);
        
        for(int i=0;i<V;i++){
            for(int j =0;j<V;j++){
                if(isConnected[i][j] == 1 && i != j){
                  adj[i].push_back(j);
                  adj[j].push_back(i);
                }
            }
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
