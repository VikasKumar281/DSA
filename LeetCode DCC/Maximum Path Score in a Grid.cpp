//Approach-1 (Recursion + Memoization) --------------------------------------------------->
//T.C : O(m*n*k)
//S.C : O(m*n*k)
class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& grid, int k, vector<vector<vector<int>>> &dp, int cost){
        int m = grid.size();
        int n = grid[0].size();
       
        if(i >= m || j >= n){
            return INT_MIN;
        }

        int newCost = cost + (grid[i][j] > 0) ;
        
        if(newCost > k){
            return INT_MIN;
        }

        if(i == m-1 && j == n - 1){
            return grid[i][j]; // Score
        }

        if(dp[i][j][newCost] != -1){
            return dp[i][j][newCost];
        }

        int right = solve(i, j+1, grid, k, dp, newCost);
        int down = solve(i+1, j, grid, k, dp, newCost);

        int bestNext = max(right, down);
        
        if(bestNext == INT_MIN){
            return dp[i][j][newCost] = INT_MIN;
        }
        
        return dp[i][j][newCost] = grid[i][j] + bestNext;
    }
    int maxPathScore(vector<vector<int>>& grid, int k){
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<vector<int>>> dp(m+1, vector<vector<int>> (n+1, vector<int>(k+1, -1)));
        
        int result = solve(0, 0, grid, k, dp, 0);

        return result == INT_MIN ? -1 : result;
    }
};
