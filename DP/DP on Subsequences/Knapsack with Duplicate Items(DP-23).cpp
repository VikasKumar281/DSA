class Solution {
  public:
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<vector<int>> dp(n,vector<int>(capacity+1,0));
        
        for(int target = 0;target<=capacity;target++){
            if(wt[0] <= target){
                dp[0][target] = (target / wt[0]) * val[0];
            }
        }
        
        for(int index = 1;index<n;index++){
           for(int target = 0;target <= capacity;target++){
               int skip = dp[index-1][target];
               int take = INT_MIN;
               if(wt[index] <= target){
                   take = val[index] + dp[index][target - wt[index]];
               }
               
               dp[index][target] = max(skip , take);
           }
        }
        
        
        return dp[n-1][capacity];
    }
};
