class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> colMax(n,INT_MIN);
        for(int j = 0; j < n; j++) {
            for(int i = 0; i < m; i++) {
                if(matrix[i][j] != -1){
                    colMax[j] = max(colMax[j], matrix[i][j]);
                }
            }
        }

        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = colMax[j];     
                }
            }
        }

        return matrix;
    }
};
//Time: O(m × n)
//Space: O(n)



class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> answer;
        answer = matrix;
        int m = answer.size();
        int n = answer[0].size();

        vector<int> colMax(n,INT_MIN);
        for(int j = 0; j < n; j++) {
            for(int i = 0; i < m; i++) {
                if(matrix[i][j] != -1){
                    colMax[j] = max(colMax[j], matrix[i][j]);
                }
            }
        }

        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(answer[i][j] == -1){
                    answer[i][j] = colMax[j];     
                }
            }
        }

        return answer;
    }
};
