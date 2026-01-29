//MEMOISATION APPROACH -------------------------------------------------------------------------------------------------->
class Solution {
public:
    int  helper(int index , int prev_ind, vector<int> &nums , int n, vector<vector<int>> &dp){
        if(index == n){
            return 0;
        }

        if(dp[index][prev_ind+1] != -1){
            return dp[index][prev_ind+1];
        }

        int skip = 0 + helper(index+1,prev_ind,nums,n,dp);
        int take = INT_MIN;
        if(prev_ind == -1 || nums[index] > nums[prev_ind]){
            take = 1 + helper(index+1,index,nums,n,dp);
        }

        return dp[index][prev_ind+1] = max(take , skip);
    }
    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> dp(size , vector<int>(size+1 , -1));
        return helper(0,-1,nums,size , dp);
    }
};
// Time	O(n²)
// Space	O(n²)
