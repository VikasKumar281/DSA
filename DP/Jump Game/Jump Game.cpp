//Bottom Up Approach ------------------------------------------------------------------------------------------------>
// Time Complexity: O(n²)
// Space Complexity: O(n)
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool> dp(n,0);
        
        dp[0] = true; // You are initially positioned at the array's first index.

        for(int i =1;i<n;i++){
           for(int j = i-1;j>=0;j--){
             if(dp[j] == true && j + nums[j] >= i){
                dp[i] = true; 
                break;
             }
           }
        } 
        return dp[n-1];
    }
};






//Recursion + Memoization (Top Down Approach)------------------------------------------------------------------------------------------------>
// Time Complexity: O(n²)
// Space Complexity: O(n)
class Solution {
public:
    bool solve(vector<int> &nums, int n, int idx, vector<int> &dp){
       if(idx == n-1){
         return true;
       }
       if(idx > n-1){
         return false;
       }

       if(dp[idx] != -1){
         return dp[idx];
       }

       for(int i=1;i <= nums[idx];i++){
         if(solve(nums, n, idx + i, dp) == true){
            return dp[idx] = true;
         }
       }

       return dp[idx] = false;
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        return solve(nums, n, 0, dp);
    }
};
