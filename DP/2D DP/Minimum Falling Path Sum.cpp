// TABULATION APPROACH -------------------------------------------------------------------------------->
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m,vector<int> (n,-1));

        //BASE CASE ------>
        for(int j = 0;j<n;j++){
            dp[0][j] = matrix[0][j];
        }

        for(int i = 1;i<m;i++){
            for(int j =0;j<n;j++){
                int up = matrix[i][j] + dp[i-1][j];
                int leftdiag = matrix[i][j];
                if(j-1 >= 0){
                  leftdiag += dp[i-1][j-1];
                }
                else{
                    leftdiag += 1e8;
                }

                int rightdiag = matrix[i][j];
                if(j+1 < m){
                  rightdiag += dp[i-1][j+1];
                }
                else{
                    rightdiag += 1e8;
                }

                dp[i][j] = min(up , min(leftdiag , rightdiag));
            }
        }

        int mini = 1e9;
        for(int i =0;i<n;i++){
            mini = min(mini , dp[m-1][i]);
        }

        return mini;
    }
};
//T.C = O(N * M)  
//S.C = O(N * M)


// MEMOIZATION APPROACH -------------------------------------------------------------------------------->
class Solution {
public:
    int func(int i, int j,vector<vector<int>>& matrix ,vector<vector<int>> &dp){
        // BOUNDARY CHECK --------------->
        int n = matrix[0].size();
        if(j<0 || j>=n){
            return 1e9;
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
         
        return dp[i][j] = min(up, min(leftdiag , rightdiag)); 
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m,vector<int> (n,-1));

        int mini = 1e9;
        for(int i =0;i<n;i++){
            mini = min(mini , func(m-1,i,matrix , dp));
        }

        return mini;
    }
};
