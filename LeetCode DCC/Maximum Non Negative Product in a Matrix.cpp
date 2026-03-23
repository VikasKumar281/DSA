class Solution {
public:
    int m, n;
    int Mod = 1e9+7;
    typedef long long ll;

    pair<ll, ll> solve(int i, int j, vector<vector<int>>& grid){
      if(i == m-1 && j == n-1){
        return {grid[i][j], grid[i][j]};
      }

      ll maxVal = LLONG_MIN;
      ll minVal = LLONG_MAX;
      
      //Down-------->
      if(i+1 < m){
        auto [downMax, downMin] = solve(i+1, j, grid);
        maxVal = max({maxVal, grid[i][j]*downMax, grid[i][j]*downMin});
        minVal = min({minVal, grid[i][j]*downMax, grid[i][j]*downMin});
      }
      
      // Right-------------->
       if(j+1 < n){
        auto [rightMax, rightMin] = solve(i, j+1, grid);
        maxVal = max({maxVal, grid[i][j]*rightMax, grid[i][j]*rightMin});
        minVal = min({minVal, grid[i][j]*rightMax, grid[i][j]*rightMin});
      }
     

      return {maxVal, minVal}; 
    }
    int maxProductPath(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        auto[maxProd, minProd] = solve(0, 0, grid);

        return maxProd < 0 ? -1 : maxProd % Mod;
    }
};
