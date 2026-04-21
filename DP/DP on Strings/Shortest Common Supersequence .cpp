// Approach => Bottom Up ---------------------------------------------------------------------->
// Time: O(m * n)
// Space: O(m * n)
class Solution {
  public:
    int minSuperSeq(string &s1, string &s2){
        int m= s1.size();
        int n = s2.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        
        for(int i =0;i<m+1; i++){
            for(int j = 0;j<n+1;j++){
                if(i == 0 || j == 0){
                    dp[i][j] = i+j;
                }
                else if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        
        return dp[m][n];
    }
};



// Approach => Memoization + Recursion ---------------------------------------------------------------------->
// Time: O(n1 * n2)
// Space: O(n1 * n2)
class Solution {
  public:
    int solve(int i , int j , string &s1, string &s2, vector<vector<int>> &dp){
        if( i >= s1.size()){
            return s2.size() - j;
        }
        else if(j >= s2.size()){
            return s1.size() - i;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        if(s1[i] == s2[j]){
            return dp[i][j] = 1 + solve(i+1, j+1, s1, s2, dp);
        }
        
        return dp[i][j] = 1 + min(solve(i+1, j, s1,s2,dp) , solve(i, j+1, s1, s2, dp));
    }
    int minSuperSeq(string &s1, string &s2) {
     int n1 = s1.size();
     int n2 = s2.size();
     
     vector<vector<int>> dp(n1+1, vector<int>(n2+1, -1));
     
     return solve(0, 0, s1, s2, dp);
    }
};
