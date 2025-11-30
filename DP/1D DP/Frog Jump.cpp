class Solution {
  public:
    int func(int index , vector<int> &dp , vector<int> &height){
        if(index == 0){
            return 0;
        }
        
        if(dp[index] != -1){
            return dp[index];
        }
        
        int left = func(index-1,dp,height) + abs(height[index] - height[index-1]);
        int right = INT_MAX;
        
        if(index > 1){
            int right = func(index-2,dp,height)+ abs(height[index] - height[index-2]);
        }
        
        return dp[index] = min(left,right);
    }
    int minCost(vector<int>& height) {
       int n = height.size();
       vector<int> dp(n,-1);
       return func(n-1,dp,height);
    }
};
