//Approach => Using DFS
class Solution {
public:
    bool isCycleDFS( vector<vector<int>> &adj, int u , vector<bool> &visited, vector<bool> & inRecursion){
        visited[u] = true;
        inRecursion[u] = true;

        for(auto &v : adj[u]){
            if(visited[v] == false && isCycleDFS(adj,v,visited, inRecursion)){
                return true;
            }
            else if(inRecursion[v] == true){
                return true;
            }
        }
        
        inRecursion[u] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto &p : prerequisites){
            int u = p[0];
            int v = p[1];

            adj[v].push_back(u);
        }
        
        vector<bool> visited(numCourses,false);
        vector<bool> inRecursion(numCourses, false);

        for(int i = 0;i<numCourses;i++){
            if(!visited[i] && isCycleDFS(adj,i,visited, inRecursion)){
                return false;
            }
        }
        
        return true;
    }
};
