class Solution {
public:
    bool DFS(vector<vector<int>> &graph, int curr, vector<int> &color, int currColor){
        color[curr] = currColor;

        for(int &v : graph[curr]){
            int colorV;
            if(color[v] == color[curr]){
                return false;
            }
            if(color[v] == -1){
                colorV = 1 - currColor;
                color[v] = colorV;
                if(DFS(graph, v, color, colorV) == false){
                  return false;
                }
            }
        }

        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> color(V, -1);

        for(int i =0;i<V;i++){
            if(color[i] == -1){
                if(DFS(graph, i, color, 1) == false){
                    return false;
                }
            }
        }

        return true;
    }
};
