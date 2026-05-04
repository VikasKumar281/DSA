class Solution {
public:
    void rev(vector<vector<int>> &matrix, int n){
       for(int i = 0;i<n;i++){
          reverse(matrix[i].begin(), matrix[i].end());
       } 
    }
    void transpose(vector<vector<int>> &matrix, int n){
       for(int i = 0;i<n;i++){
        for(int j =i;j<n;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
       }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        transpose(matrix, n);
        rev(matrix,n);
    }
};
