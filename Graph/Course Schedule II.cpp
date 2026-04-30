// Approach => Using DFS
// Ques => Cycle Detection in Directed Graph (DFS)
class Solution {
public:
    bool isCycleDFS(vector<vector<int>> &adj, int u, vector<bool> &visited, stack<int> &st, vector<bool> &inRecursion){
        visited[u] = true;
        inRecursion[u] = true;
        
        for(auto &v: adj[u]){
            if(!visited[v]){
                if(isCycleDFS(adj, v, visited, st, inRecursion)){
                    return true;
                };
            }
            else if(inRecursion[v] == true){
                return true;
            }
        }

        st.push(u);
        inRecursion[u] = false;

        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto &p: prerequisites){
            int v = p[0];
            int u = p[1];

            adj[u].push_back(v);
        }

        vector<bool> visited(numCourses, false);
        vector<bool> inRecursion(numCourses, false);
        stack<int> st;
        
        vector<int> result;
        for(int i =0;i<numCourses;i++){
            if(!visited[i]){
               if(isCycleDFS(adj, i, visited, st, inRecursion)){
                return {};
               };
            }
        }

        while(!st.empty()){
            int u = st.top();
            result.push_back(u);
            st.pop();
        }

        return result;
    }
};
