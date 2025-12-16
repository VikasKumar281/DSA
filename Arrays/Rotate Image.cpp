class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Transpose the Matrix =>
        for(int i =0;i<n;i++){
            for(int j = i+1;j<n;j++){
               swap(matrix[i][j],matrix[j][i]);
            }
        }

        // Reverse the Matrix =>
        for(int i =0;i<n;i++){
            for(int j = 0;j < n/2;j++){
                swap(matrix[i][j],matrix[i][n-1-j]);
            }
        }

        // for(int i =0;i<n;i++){
        //     reverse(matrix[i].begin(),matrix[i].end());
        // }

    }
};
// Time Complexity  : O(n^2)
// Space Complexity : O(1)(Auxiliary space)



class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<vector<int>> arr(n, vector<int>(n));

        for(int i =0;i<n;i++){
            for(int j = 0;j<n;j++){
               arr[i][j] = matrix[n-1-j][i];
            }
        }

        matrix = arr;
    }
};
// Time Complexity  : O(n^2)
// Space Complexity : O(n^2)
