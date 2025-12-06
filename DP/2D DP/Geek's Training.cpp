
// TABULATION APPROACH ----------------------------------------------------------------------------------------------------------------------->
class Solution {
  public:
    int maximumPoints(vector<vector<int>>& arr) {
        int n = arr.size();
        
        vector<vector<int>> dp(n,vector<int> (4,-1));
        
        // BASE CASE ----------------------->
        dp[0][0] = max(arr[0][1] , arr[0][2]);
        dp[0][1] = max(arr[0][0] , arr[0][2]);
        dp[0][2] = max(arr[0][0] , arr[0][1]);
        dp[0][3] = max(arr[0][1] , max(arr[0][0], arr[0][2]));
        
        
        for(int day = 1; day<n;day++){
            for(int last = 0;last<4;last++){
                dp[day][last] = 0;
                for(int task = 0;task<3;task++){
                    if(task != last){
                        int point = arr[day][task] + dp[day-1][task];
                        dp[day][last] = max(dp[day][last],point);
                    }
                }
            }
        }
        
        return dp[n-1][3];
    }
};






// MEMOIZATION APPROACH ------------------------------------------------------------------------------------------------------->
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
