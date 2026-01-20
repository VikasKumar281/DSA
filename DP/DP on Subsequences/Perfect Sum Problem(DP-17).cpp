// TABULATION APPROACH ------------------------------------------------------------------------>
class Solution {
  public:
    int mod = 1e9 + 7;
    int perfectSum(vector<int>& arr, int target) {
       int n = arr.size();
       vector<vector<int>> dp(n , vector<int>(target+1,0));
       
       //BASE CASE FOR INDEX 0 --------------------------------->
       if(arr[0] == 0){
           dp[0][0]=2;
       }
       else{
           dp[0][0]=1;
       }
       
       if(arr[0] != 0 && arr[0] <= target){
           dp[0][arr[0]] = 1;
       }
       
       for(int index =1;index < n;index++){
           for(int sum = 0;sum <= target;sum++){
               int skip = dp[index-1][sum];
               int pick = 0;
               if(arr[index] <= sum){
                   pick = dp[index-1][sum - arr[index]];
               }
               
               dp[index][sum] = (pick + skip) % mod;
           }
       }
       return dp[n-1][target];
    }
};
//Time: O(n × target)
// Space: O(n × target)



//MEMOIZATION APPROACH ------------------------------------------------------------------------->
class Solution {
  public:
    int mod = 1e9+7;
    // We use modulo because the number of subsets can become very large.
    
    int helper(int index,vector<int> &arr,vector<vector<int>> &dp,int target){
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
        int skip = helper(index-1, arr,dp,target);
        int pick = 0;
        if(arr[index] <= target){
            pick = helper(index-1,arr,dp,target-arr[index]);
        }
        
        return dp[index][target] =  (skip + pick) % mod;
    }
    int perfectSum(vector<int>& arr, int target) {
       int n = arr.size();
       vector<vector<int>> dp(n , vector<int>(target+1,-1));
       return helper(n-1,arr,dp,target);
    }
};
//Time : O(n × target)
//Space :	O(n × target)
