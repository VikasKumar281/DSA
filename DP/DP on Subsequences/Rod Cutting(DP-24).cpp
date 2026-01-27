// TABULATION APPROACH ------------------------------------------------------------------------------------------------->
class Solution {
  public:
    int cutRod(vector<int> &price) {
        int n = price.size();
        int totLength = n;
        vector<vector<int>> dp(n,vector<int>(totLength+1,0));
        
        for(int target=0;target <= totLength;target++){
            dp[0][target] = target * price[0];
        }
        
        for(int index = 1;index < n;index++){
            for(int target = 0;target<= totLength;target++){
                int skip = 0 + dp[index-1][target];
                int take = INT_MIN;
                int rodLength = index + 1;
                if(rodLength <= target){
                    take = price[index] + dp[index][target - rodLength];
                }
                
                dp[index][target] = max(skip , take);
            }
        }
        
        
        return dp[n-1][totLength];
    }
};
//Time: O(n²)
// Space: O(n²)



class Solution {
  public:
    int helper(int index, vector<int> &price, vector<vector<int>> &dp,int target){
        if(index == 0){
            return target * price[0];
        }
        
        if(dp[index][target] != -1){
            return dp[index][target];
        }
        
        int skip = helper(index-1,price,dp,target);
        int take = INT_MIN;
        int rodLength = index + 1;
        if(rodLength <= target){
            take = price[index] + helper(index,price,dp,target - rodLength);
        }
        
        return dp[index][target] = max(skip,take);
    }
    int cutRod(vector<int> &price) {
        int n = price.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return helper(n-1,price,dp,n);
    }
};
