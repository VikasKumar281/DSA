// Using BFS ------------------------------------------------------------------------------------------------------------------------------->
class Solution {
  public:
    vector<int> topologicalSort(vector<vector<int>> &adj, int n, vector<int> &inDegree){
        queue<int> que;
        vector<int> result;
        int count = 0;
        
        for(int i =0;i<n;i++){
            if(inDegree[i] == 0){
                result.push_back(i);
                count++;
                que.push(i);
            }
        }
        
        while(!que.empty()){
            int curr = que.front();
            que.pop();
            
            for(int &v : adj[curr]){
                inDegree[v]--;
                
                if(inDegree[v] == 0){
                    result.push_back(v);
                    count++;
                    que.push(v);
                }
            }
        }
        
        if(count == n){
            // No Cycle is present.
            return result;
        }
        
        return {};
    }
    vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
      vector<vector<int>> adj(n);
      vector<int> inDegree(n, 0);
      
      for(auto &p : prerequisites){
          int u = p[1];
          int v = p[0];
          
          // u -------> v
          adj[u].push_back(v);
          
          inDegree[v]++;
      }
      
      return topologicalSort(adj, n, inDegree);
    }
};





// Using DFS ------------------------------------------------------------------------------------------------------------------------------->
class Solution {
  public:
    bool isCycleDFS(vector<vector<int>> &adj, int u, vector<bool> &visited, vector<bool> &inRecursion, stack<int> &st){
        visited[u] = true;
        inRecursion[u] = true;
        
        for(int &v: adj[u]){
            if(!visited[v] && isCycleDFS(adj, v, visited, inRecursion, st)){
                return true;
            }
            else if(inRecursion[v] == true){
                return true;
            }
        }
        
        inRecursion[u] = false;
        st.push(u);
        return false;
    }
    vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
      vector<vector<int>> adj(n);
      
      for(auto &p : prerequisites){
          int u = p[1];
          int v = p[0];
          
          adj[u].push_back(v);
      }
      
      vector<bool> visited(n, false);
      vector<bool> inRecursion(n, false);
      stack<int> st;
      
      for(int i =0;i<n;i++){
          if(!visited[i]){
              if(isCycleDFS(adj, i, visited, inRecursion, st)){
                  return {};
              }
          }
      }
      
      vector<int> result;
      while(!st.empty()){
          int curr = st.top();
          result.push_back(curr);
          st.pop();
      }
      
      return result;
    }
};
