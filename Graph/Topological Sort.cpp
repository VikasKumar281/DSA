//Approach => Using BFS ----------------------------------------------------------------------------------------------------------->
// Time => O(V + E)
// Space => O(V + E)
class Solution {
  public:
    vector<int> topoSort(int N, vector<vector<int>>& edges) {
      vector<vector<int>> adj(N);
      
      for(auto &e : edges){
          int u = e[0];
          int v = e[1];
          
          adj[u].push_back(v);
      }
      
      vector<int> inDegree(N, 0);
      queue<int> que;
      
      for(int u = 0;u<N;u++){
          for(int &v : adj[u]){
              inDegree[v]++;
          }
      }
      
      for(int i=0;i<N;i++){
          if(inDegree[i] == 0){
              que.push(i);
          }
      }
      
      vector<int> result;
      while(!que.empty()){
          int u = que.front();
          result.push_back(u);
          que.pop();
          
          for(int &v : adj[u]){
              inDegree[v]--;
              
              if(inDegree[v] == 0){
                  que.push(v);
              }
          }
      }
      
      return result;
    }
};








//Approach => Using DFS ---------------------------------------------------------------------------------------------------------------------->
// Time => O(V + E)
// Space => O(V + E)
class Solution {
  public:
    void DFS(vector<vector<int>> &adj, int u , vector<bool> &visited, stack<int> &st){        
        visited[u] = true;
        
        for(int &v: adj[u]){
            if(!visited[v]){
                DFS(adj, v, visited, st);
            }
        }
        
        st.push(u);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
      vector<vector<int>> adj(V);
      
      for(auto &e : edges){
          int u = e[0];
          int v = e[1];
          
          adj[u].push_back(v);
      }
      
      vector<bool> visited(V, false);
      stack<int> st;
      
      for(int i =0;i<V;i++){
          if(!visited[i]){
              DFS(adj, i, visited, st);
          }
      }
      
      vector<int> result;
      while(!st.empty()){
          result.push_back(st.top());
          st.pop();
      }
      
      return result;
    }
};




//Approach => Using DFS ------------------------------------------------------------------------------------------------------------------->
// Time => O(V + E)
// Space => O(V + E)
class Solution {
  public:
    void DFS(vector<vector<int>> &adj, int u , vector<bool> &visited, stack<int> &st){
        if(visited[u] == true){
            return;
        }
        
        visited[u] = true;
        
        for(int &v: adj[u]){
            DFS(adj, v, visited, st);
        }
        
        st.push(u);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
      vector<vector<int>> adj(V);
      
      for(auto &e : edges){
          int u = e[0];
          int v = e[1];
          
          adj[u].push_back(v);
      }
      
      vector<bool> visited(V, false);
      stack<int> st;
      
      for(int i =0;i<V;i++){
          if(!visited[i]){
              DFS(adj, i, visited, st);
          }
      }
      
      vector<int> result;
      while(!st.empty()){
          result.push_back(st.top());
          st.pop();
      }
      
      return result;
    }
};
