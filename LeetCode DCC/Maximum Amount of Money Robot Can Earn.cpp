class Solution {
public:
    int m, n;
    int dp[501][501][3];

    int solve(vector<vector<int>>& coins, int i, int j, int neutral){
        if(i == m-1 && j == n-1){
            if(coins[i][j] < 0 && neutral > 0){
                return 0;
            }

            return coins[i][j];
        }

        if(i >= m || j >= m){
            return INT_MIN;
        }


        if(dp[i][j][neutral] != INT_MIN){
            return dp[i][j][neutral];
        }

        int take = coins[i][j] + max(
            solve(coins, i+1, j, neutral),
            solve(coins, i, j+1, neutral)
        );

        int skip = INT_MIN;
        if(coins[i][j] < 0 && neutral > 0){
            int skipDown =  solve(coins, i+1, j, neutral-1);
            int skipRight =  solve(coins, i, j+1, neutral-1);

            skip = max(skipDown, skipRight);
        }


        return dp[i][j][neutral] = max(skip , take);
    }
    int maximumAmount(vector<vector<int>>& coins) {
        m = coins.size();
        n = coins[0].size();

        for(int i =0;i<501;i++){
            for(int j =0;j<501;j++){
                for(int k = 0;k<3;k++){
                    dp[i][j][k] = INT_MIN;
                }
            }
        }

        return solve(coins, 0, 0, 2);
    }
};
