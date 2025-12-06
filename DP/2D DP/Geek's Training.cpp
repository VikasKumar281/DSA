class Solution {
  public:
    int func(int day, int last , vector<vector<int>> &points,vector<vector<int>>& dp){
        int maxi = 0;
        if(day == 0){
            for(int task = 0;task<=2;task++){
                if(task != last){
                   maxi = max(maxi,points[day][task]); 
                }
            }
            return maxi;
        }
        
        if(dp[day][last] != -1){
            return dp[day][last];
        }
        
        for(int task=0;task <= 2;task++){
            if(task != last){
                int point = points[day][task] + func(day-1,task,points,dp);
                maxi = max(maxi , point);
            }
        }
        
        return dp[day][last] = maxi;
    }
    int maximumPoints(vector<vector<int>>& arr) {
        int n = arr.size();
        
        // Number of columns =>
        int m = arr[0].size();
        
        vector<vector<int>> dp(n,vector<int> (4,-1));
        
        return func(n-1,3,arr,dp);
    }
};
