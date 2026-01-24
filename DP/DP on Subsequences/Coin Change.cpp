//TABULATION APPROACH --------------------------------------------------------------------------->
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount + 1,0));
        
        for(int target = 0;target <= amount;target++){
          if(target % coins[0] == 0){
            dp[0][target] = target / coins[0];
          }
          dp[0][target] = 1e9;
        }

        for(int index = 1;index<n;index++){
            for(int target = 0;target <= amount;target++){
                int skip = 0 + dp[index-1][target];
                int take = 1e9;
                if(coins[index] <= target){
                    take = 1 + dp[index][target - coins[index]];
                }

                dp[index][target] = min(take , skip);
            }
        }

        int ans = dp[n-1][amount];
        return (ans >= 1e9 ? -1 : ans);
    }
};
// Time: O(n × amount)
// Space: O(n × amount)



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
