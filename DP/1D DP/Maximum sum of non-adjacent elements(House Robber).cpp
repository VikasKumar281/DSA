class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        int prev2 = 0;
        int prev = nums[0];

        for(int i = 1;i<n;i++){
            int pick = nums[i];
            if(i>1){
                pick = nums[i] + prev2;
            }

            int skip = 0 + prev;

            int curr = max(pick,skip); 
            prev2 =prev;
            prev = curr;
        }

       return prev;
    }
};
// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(1)



class Solution {
public:
    int func(int index , vector<int> &dp , vector<int> &nums){
        if(index < 0){
            return 0;
        }
        if(index == 0){
            return nums[0];
        }

        if(dp[index] != -1){
            return dp[index];
        }

        int pick = func(index-2,dp,nums) + nums[index];
        
        int skip = func(index-1,dp,nums) + 0;

        return dp[index] = max(pick,skip); 
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        return func(n-1,dp,nums);
    }
};
