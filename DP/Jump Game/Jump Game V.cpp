//Approach => (Recursion + Memoization) --------------------------------------------------------------------->
//T.C : O(n*d)
//S.C : O(n)
class Solution {
public:
    int solve(vector<int> &arr, int idx, int d, vector<int> &dp){
        int n = arr.size();

        if(dp[idx] != -1){
            return dp[idx];
        }

        int result = 1;

        // Left ------------------------------>
        for(int j = idx-1; j >= max(0, idx-d); j--){
            if(arr[j] >= arr[idx]){
                break;
            }

            result = max(result, 1 + solve(arr, j, d, dp));
        }


        // Right ------------------------------>
        for(int j = idx+1; j <= min(n-1, idx+d); j++){
            if(arr[j] >= arr[idx]){
                break;
            }

            result = max(result, 1 + solve(arr, j, d, dp));
        }

        return dp[idx] = result;
    }
    int maxJumps(vector<int>& arr, int d) {
        int n = arr.size();

        vector<int> dp(n, -1);
        
        int result = 1;
        for(int i=0;i<n;i++){
           result = max(result, solve(arr, i, d, dp));
        } 

        return result;
    }
};
