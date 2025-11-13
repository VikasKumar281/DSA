class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int a = original.size();
        
        // create m x n matrix
        vector<vector<int>> ans(m,vector<int>(n));

        if(m * n != a){
            return {};
        }

        for(int i=0;i<=m-1;i++){
           for(int j =0;j<=n-1;j++){
             ans[i][j] = original[ i*n + j];
           }
        }

        return ans;
    }
};
