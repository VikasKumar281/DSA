class Solution {
  public:
     int func(int i, int j,vector<vector<int>>& matrix ,vector<vector<int>> &dp){
        // BOUNDARY CHECK --------------->
        int n = matrix[0].size();
        if(j<0 || j>=n){
            return -1e9;
        }
        // BASE CASE =>
        if(i == 0){
            return matrix[0][j];
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }

        int up = matrix[i][j] + func(i-1,j,matrix , dp);
        int leftdiag = matrix[i][j] + func(i-1 , j-1 , matrix , dp);
        int rightdiag = matrix[i][j] + func(i-1 , j+1 , matrix , dp);
         
        return dp[i][j] = max(up, max(leftdiag , rightdiag)); 
    }
    int maximumPath(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> dp(m,vector<int> (n,-1));

        int maxi = -1e9;
        for(int i =0;i<n;i++){
            maxi = max(maxi , func(m-1,i,mat , dp));
        }

        return maxi;
    }
};
