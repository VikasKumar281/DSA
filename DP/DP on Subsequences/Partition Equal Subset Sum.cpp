// MEMOIZATION APPROACH --------------------------------------------------------------------------------------------------->
class Solution {
public:
    bool subsetSum(vector<int> &nums, int target, vector<vector<int>> &dp ,int index){
        if(target == 0){
            return true;
        }
        if(index == 0){
           return (nums[0] == target);
        }

        if(dp[index][target] != -1){
            return dp[index][target];
        }

        bool nottake = subsetSum(nums,target,dp,index - 1);
        bool take = false;
        if(nums[index] <= target){
            take = subsetSum(nums, target - nums[index] , dp , index-1);
        }

        return dp[index][target] = take || nottake;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
       
        int totalSum = 0;
        for(int i =0;i<n;i++){
           totalSum += nums[i];
        }

        if(totalSum % 2 != 0){
            return false;
        }

        int target = totalSum /2 ;
        vector<vector<int>> dp(n , vector<int>(target+1 , -1));
        return subsetSum(nums , target , dp,n-1);
    }
};
