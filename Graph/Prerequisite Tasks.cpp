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
