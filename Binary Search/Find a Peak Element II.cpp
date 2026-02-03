class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();


        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                bool peak = true;

                if(i > 0 && mat[i][j] <= mat[i-1][j]){
                    peak = false;
                }
                if(i+1 < m && mat[i][j] <= mat[i+1][j]){
                    peak = false;
                }
                if(j > 0 &&  mat[i][j] <= mat[i][j-1] && mat[i][j] > mat[i][j+1]){
                    peak = false;

                }
                if(j+1 < n && mat[i][j] <= mat[i][j+1]){
                    peak = false;
                }

                if(peak){
                    return {i , j};
                }
            }
        }

        return {-1,-1};
    }
};
