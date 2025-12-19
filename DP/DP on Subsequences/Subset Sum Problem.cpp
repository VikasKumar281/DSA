// TABULATION APPROACH ---------------------------------------------------------------------------------->
class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<vector<bool>>dp(n ,vector<bool>(sum+1, false));
        
        // BASE CASE --------------------------->
        for(int index =0;index<n;index++){
            // target == 0
            dp[index][0] = true;
        }
        
        if(arr[0] <= sum){
            // index == 0
            dp[0][arr[0]] = true;
        }
        
        for(int index = 1;index < n;index++){
            for(int target = 1;target <= sum;target++){
                bool notTake = dp[index-1][target];
                bool take = false;
                if(arr[index] <= target){
                 take = dp[index-1][target- arr[index]];
                }
                
                dp[index][target] = take || notTake;
            }
        }
        
        return dp[n-1][sum];
    }
};
//T.C. = O(n × sum)
//Space Complexity = O(n × sum)


// Memoization Approach ----------------------------------------------------------------------------->
class Solution {
  public:
    bool subset(int index,vector<int> & arr, vector<vector<int>> &dp,int sum){
        if(sum == 0){
            return true;
        }
        if(index == 0){
            return (arr[0] == sum);
        }
        
        if(dp[index][sum] != -1){
            return dp[index][sum];
        }
        
        bool skip = subset(index-1, arr,dp,sum);
        
        bool take = false;
        if(arr[index] <= sum){
           take = subset(index-1 , arr,dp,sum - arr[index]);
        }
        
        return dp[index][sum] = take || skip;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<vector<int>>dp(n ,vector<int>(sum+1, -1));
        return subset(n-1,arr,dp,sum);
    }
};
