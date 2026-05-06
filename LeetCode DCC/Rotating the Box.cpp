
// T.C. = O(m * n^2)
// S.C. = O(m * n)
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        int n = boxGrid[0].size();

        vector<vector<char>> result(n, vector<char>(m));

        // Transpose =>
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                result[i][j] = boxGrid[j][i];
            }
        }

        // Reverse the array(row-wise) =>
        for(vector<char> &vec : result){
            reverse(begin(vec), end(vec));
        }


        // Apply the Gravity =>
        for(int j =0;j<m;j++){
            for(int i = n-1;i>=0;i--){
                if(result[i][j] == '.'){// if it is a space --->
                  int stoneRow = -1;

                   for(int k = i-1;k>=0;k--){
                      if(result[k][j] == '*'){
                        break;
                      }
                      else if(result[k][j] == '#'){
                        stoneRow = k;
                        break;
                      }
                   }

                   if(stoneRow != -1){
                     result[i][j] = '#';
                     result[stoneRow][j] = '.';
                   }
                }
            }
        }

        return result;
    }
};
