class Solution {
public:
    int func(int index , vector<int> &heights,vector<int> &dp,int k){
        if(index == 0){
            return 0;
        }
        int minEnergy = INT_MAX;

        if(dp[index] != -1) {
            return dp[index];
        }
        
        for(int j = 1;j<=k ;j++){
            if(index - j >= 0){   
              int jump = func(index-j,heights,dp,k) + abs(heights[index] - heights[index-j]);
              minEnergy = min(minEnergy,jump);
            }
        }

        return dp[index] = minEnergy;
    }
    int frogJump(vector<int>& heights, int k) {
       int n = heights.size();
       vector<int>dp(n,-1);
       return func(n-1,heights,dp,k);
    }
};
