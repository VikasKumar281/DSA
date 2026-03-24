class Solution {
public:
    int Mod = 12345;
    typedef long long ll;
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
       int m = grid.size();
       int n = grid[0].size();
       
       vector<vector<int>> result(m, vector<int>(n, 0));

       ll suffix = 1; 
       for(int i =m-1;i>=0;i--){
        for(int j =n-1;j>=0;j--){
            result[i][j] = suffix;
            suffix = (suffix * grid[i][j]) % Mod;
        }
       }
       
       ll prefix = 1;
       for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            result[i][j] = (prefix * result[i][j]) % Mod;
            prefix = (prefix * grid[i][j]) % Mod;
        }
       }

       return result;
    }
};
// Time: O(m × n)
// Space: O(1)
