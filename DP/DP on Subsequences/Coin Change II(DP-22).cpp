// MEMOIZATION APPROACH --------------------------------------------------------------------------------------------------------->
class Solution {
public:
    int helper(int target,vector<int> & coins,int index , vector<vector<int>> & dp){
      if(index == 0){
        return (target % coins[0] == 0);
      }

      if(dp[index][target] != -1){
        return dp[index][target];
      }

      int skip = helper(target, coins , index-1, dp);
      int take = 0;
      if(coins[index] <= target){
        take = helper(target - coins[index] , coins, index,dp); 
      }

      return dp[index][target] = skip + take;
    }
    int change(int amount, vector<int>& coins) {
      int n = coins.size();
      vector<vector<int>> dp(n,vector<int>(amount+1,-1));
      return helper(amount , coins , n-1 , dp);     
    }
};
// Time: O(n × amount)
// Space: O(n × amount)
