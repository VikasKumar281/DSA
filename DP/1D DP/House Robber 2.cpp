class Solution {
public:
    int robLinear(vector<int> &nums){
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        if(n==0){
            return 0;
        }
        vector<int> dp(n,0);
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);

        for(int i =2;i<n;i++){
            int pick = nums[i] + dp[i-2];
            int skip = dp[i-1];

            dp[i] = max(pick,skip);
        }
        return dp[n-1];
    }
    // For Circular -------------------------------------->
    int rob(vector<int>& nums) {
      int n = nums.size()-1;
      if(n == 0){
        return nums[0];
      }
      vector<int> case1(nums.begin(),nums.end() - 1);         
      vector<int> case2(nums.begin() + 1,nums.end());

      return max(robLinear(case1) , robLinear(case2));         
    }
};




class Solution {
public:
    int func(int index, vector<int> &nums, vector<int> &dp) {
        if(index < 0) {
            return 0;  
        }

        if(index == 0) {
            return nums[0]; 
        }

        if(dp[index] != -1) {
            return dp[index];
        }

        int pick = nums[index] + func(index - 2, nums, dp);

        int skip = func(index - 1, nums, dp);

        return dp[index] = max(pick, skip);
    }

    int robLinear(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return func(n - 1, nums, dp);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) {
            return nums[0];
        }
        vector<int> a(nums.begin(), nums.end() - 1);

        vector<int> b(nums.begin() + 1, nums.end());

        return max(robLinear(a), robLinear(b));
    }
};
