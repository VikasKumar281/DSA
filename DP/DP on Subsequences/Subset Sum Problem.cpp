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
