// TABULATION APPROACH ------------------------------------------------------------------------------------------------------------->
class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
       int n = val.size();
       vector<vector<int>> dp(n,vector<int>(W+1,0));
       
       for(int target = 0;target <= W;target++){
           if(wt[0] <= target){
               dp[0][target] = val[0];
           }
       }
       
       for(int index = 1;index<n;index++){
           for(int target = 0;target<=W;target++){
               int skip = dp[index-1][target];
               int take = INT_MIN;
               if(wt[index]<=target){
                   take = val[index] + dp[index-1][target - wt[index]];
               }
               
               dp[index][target] = max(skip , take);
           }
       }
       
       return dp[n-1][W];
    }
};
// Time Complexity: O(N × W)
// Space Complexity: O(N × W)



// MEMOIZATION APPROACH ------------------------------------------------------------------------------------------------------>
class Solution {
  public:
    int helper(int index, int target,vector<int> &val, vector<int> &wt,  vector<vector<int>> &dp){
        if(index == 0){
            if(wt[0] <= target){
                return val[0];
            }
            return 0;
        }
        
        if(dp[index][target] != -1){
            return dp[index][target];
        }
        
        int skip = helper(index-1, target , val , wt,dp);
        int take = INT_MIN;
        if(wt[index] <= target){
            take = val[index] + helper(index-1, target - wt[index],val,wt,dp);
        }
        
        return dp[index][target] = max(skip , take);
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
       int n = val.size();
       vector<vector<int>> dp(n,vector<int>(W+1,-1));
       return helper(n-1,W,val,wt,dp);
    }
};
//T.C. = O(N * W)
//S.C. = O(N * W)
