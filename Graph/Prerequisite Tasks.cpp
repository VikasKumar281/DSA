// Using BFS (Kahn's Algorithm) ------------------------------------------------------------------------------------------>
class Solution {
  public:
    bool isPossible(int N, int P, vector<pair<int, int> >& prerequisites) {
        vector<vector<int>> adj(N);
        
        for(auto &p : prerequisites){
            int u = p.first;
            int v = p.second;
            
            adj[u].push_back(v);
        }
        
        vector<int> inDegree(N, false);
        
        queue<int> que;
        for(int u =0;u<N;u++){
            for(int &v: adj[u]){
                inDegree[v]++;
            }
        }
        int count = 0;
        for(int i =0;i<N;i++){
            if(inDegree[i] == 0){
                que.push(i);
                count++;
            }
        }
        
        while(!que.empty()){
            int u = que.front();
            que.pop();
            
            for(int &v: adj[u]){
                inDegree[v]--;
                
                if(inDegree[v] == 0){
                    que.push(v);
                    count++;
                }
            }
        }
        
        if(count == N){
            return true;
        }
        
        
        return false;
    }
};







// Using DFS ------------------------------------------------------------------------------------------>
class Solution {
  public:
    bool isCycleDFS(vector<vector<int>> &adj, int u, vector<bool> &visited, vector<bool> &inRecursion){
        visited[u] = true;
        inRecursion[u] = true;
        
        for(int &v: adj[u]){
            if(!visited[v] && isCycleDFS(adj, v, visited, inRecursion)){
                return true;
            }
            else if(inRecursion[v] == true){
                return true;
            }
        }
        
        inRecursion[u] = false;
        
        return false;
    }
    bool isPossible(int N, int P, vector<pair<int, int> >& prerequisites) {
        vector<vector<int>> adj(N);
        
        for(auto &p : prerequisites){
            int u = p.first;
            int v = p.second;
            
            adj[u].push_back(v);
        }
        
        vector<bool> visited(N, false);
        vector<bool> inRecursion(N, false);
        
        for(int i =0;i<N;i++){
            if(!visited[i] && isCycleDFS(adj, i, visited, inRecursion)){
                return false;
            }
        }
        
        
        return true;
    }
};
