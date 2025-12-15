// TABULATION APPROACH ----------------------------------------------------------------------------------------->
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
       int n = triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));

        for(int j = 0;j < n;j++){
            dp[n-1][j] = triangle[n-1][j];
        }

        for(int i = n-2; i>=0 ;i--){
            for(int j = i; j >= 0;j--){
                int down = triangle[i][j] + dp[i+1][j];
                int diag = triangle[i][j] + dp[i+1][j+1];

                dp[i][j] = min(down,diag);
            }
        }

        return dp[0][0];
    }
};
//Time Complexity  : O(n²)
//Space Complexity : O(n²)


// MEMOIZATION APPROACH ---------------------------------------------------------------------------------->
class Solution {
public:
    int solve(int i , int j, vector<vector<int>>& dp,vector<vector<int>>& triangle){
        int n = triangle.size();
        if(i == n-1){
            return triangle[n-1][j];
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }

        int down = triangle[i][j] + solve(i+1,j,dp,triangle);
        int diag = triangle[i][j] + solve(i+1,j+1,dp,triangle);

        return dp[i][j] = min(down,diag);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
       int n = triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return solve(0,0,dp,triangle);
    }
};
//Time Complexity  : O(n²)
//Space Complexity : O(n²)
