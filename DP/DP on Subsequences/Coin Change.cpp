//MEMOIZATION APPROACH ------------------------------------------------------------------------------>
class Solution {
public:
    int helper(int index,vector<int>& coins, int target,vector<vector<int>> &dp){
      if(index == 0){
        if(target % coins[0] == 0){
            return target / coins[0];
        }
        return 1e9;
      }

      if(dp[index][target] != -1){
        return dp[index][target];
      }

      int notTake = 0 + helper(index-1,coins,target,dp);
      int take = 1e9;
      if(coins[index] <= target){
        take = 1 + helper(index,coins,target - coins[index],dp);
      }

      return dp[index][target] = min(take , notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount + 1,-1));
        int ans = helper(n-1,coins,amount,dp);

        return (ans >= 1e9 ? -1 : ans);
    }
};

// Time: O(n × amount)
// Space: O(n × amount)
