class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        int maxi = 1;

        vector<int> dp(n,1) , cnt(n,1);
        for(int ind = 0;ind < n;ind++){
            for(int prev = 0; prev < ind;prev++){
                if(nums[prev] < nums[ind] && dp[prev] + 1 > dp[ind]){
                    dp[ind] =  1 + dp[prev];
                    //Inherit --------------------->
                    cnt[ind] = cnt[prev];
                }
                else if(nums[prev] < nums[ind] && dp[prev] + 1 == dp[ind]){
                   //Increase ----------------------------------->
                   cnt[ind] += cnt[prev];
                }
            }

            maxi = max(maxi,dp[ind]);
        }

        int numbers = 0;
        for(int i =0;i<n;i++){
            if(dp[i] == maxi){
                numbers += cnt[i];
            }
        }

        return numbers;
    }
};
// Time=O(n2)​
// Space=O(n)​
