// MEMOIZATION APPROACH -------------------------------------> This question's solution is same as DP-18's solution... 
class Solution {
public:
    int helper(vector<int>&arr,vector<vector<int>> &dp,int index,int target){
        if(index == 0){
            if(target == 0 && arr[0] == 0){
                return 2;
            }
            if(target == 0 || arr[0] == target){
                return 1;
            }
            return 0;
        }
        
        if(dp[index][target] != -1){
            return dp[index][target];
        }
        
        int skip = helper(arr , dp,index -1,target);
        int pick = 0;
        if(arr[index] <= target){
            pick = helper(arr , dp , index-1,target-arr[index]);
        }
        
        return dp[index][target] = (skip + pick);
    }
    int findWays(vector<int> &nums,int target){
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return helper(nums,dp,n-1,target);
    }
    int countPartitions(vector<int> &nums ,int target){
      int totalSum = 0;
      for(int it:nums){
        totalSum += it;
      }

      if((totalSum - target < 0) || (totalSum - target) % 2){
        return false;
      }

      return findWays(nums,(totalSum-target)/2);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return countPartitions(nums,target);
    }
};
