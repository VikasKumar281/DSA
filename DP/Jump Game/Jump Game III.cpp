class Solution {
public:
    bool solve(vector<int>& arr, int i, vector<int> &dp){
        int n = arr.size();
        if(i < 0 || i >= n || arr[i] < 0){
            return false;
        }
        if(arr[i] == 0){
            return true;
        }

        if(dp[i] != -1){
            return dp[i];
        }

        arr[i] *= -1;
        
        bool a = solve(arr, i + arr[i], dp);
        bool b = solve(arr, i - arr[i], dp);

        return dp[i] = a || b;
    }
    bool canReach(vector<int>& arr, int start) {
        vector<int> dp(arr.size(), -1);
        return solve(arr, start, dp);
    }
};






class Solution {
public:
    bool solve(vector<int>& arr, int i){
        int n = arr.size();
        if(i < 0 || i >= n || arr[i] < 0){
            return false;
        }
        if(arr[i] == 0){
            return true;
        }

        arr[i] *= -1;
        
        bool a = solve(arr, i + arr[i]);
        bool b = solve(arr, i - arr[i]);

        return a || b;
    }
    bool canReach(vector<int>& arr, int start) {
        return solve(arr, start);
    }
};
