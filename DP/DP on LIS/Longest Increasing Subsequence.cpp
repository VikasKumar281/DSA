// LIS USING BINARY SEARCH --------------------------------------------------------------------------------->
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        vector<int> temp;
        temp.push_back(nums[0]);

        for(int i =1;i<n;i++){
            if(nums[i] > temp.back()){
                temp.push_back(nums[i]);
            }
            else{
                int index = lower_bound(temp.begin(),temp.end() ,nums[i]) - temp.begin();
                temp[index] = nums[i];
            }
        }

        return temp.size();
    }
};
// Time Complexity => O(N∗Log(N))
// Space Complexity => O(N)


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int maxi = 1;

        vector<int> dp(n,1);
        for(int i = 0;i<n;i++){
            for(int prev = 0; prev < i;prev++){
                if(nums[prev] < nums[i]){
                    dp[i] = max(dp[i] , 1 + dp[prev]);
                }
            }

            maxi = max(maxi , dp[i]);
        }

        return maxi;
    }
};
// Time = O(n²)
// Space = O(n)



// TABULATION APPROACH -------------------------------------------------------------------------------------------------------------->
class Solution {
  public:
    int lis(vector<int>& arr) {
       int n = arr.size();
       vector<vector<int>> dp(n+1, vector<int>(n+1 , 0));
       
       for(int index = n-1; index >=0;index--){
           for(int prev_index = index - 1;prev_index >= -1;prev_index--){
                int skip = 0 + dp[index+1][prev_index+1];
                int take = INT_MIN;
                if(prev_index == -1 || arr[prev_index] < arr[index]){
                    take = 1 + dp[index+1][index+1];
                }
                
                dp[index][prev_index+1] = max(take , skip); 
           }
       }
       return dp[0][-1+1];
    }
};
// Time = O(n²)
// Space = O(n²)


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
// Time = O(n²)
// Space = O(n²)
