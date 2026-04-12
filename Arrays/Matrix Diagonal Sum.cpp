class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int sum = 0;
       int m = mat.size();
       int n = mat[0].size();

       for(int i =0;i<m;i++){
        for(int j = 0;j<n;j++){
           if(i == j){
            sum += mat[i][j];
           }
        }
       } 
        
        int col = n-1;
        for(int i =0;i<m;i++){
            if(i == col){
                col--;
                continue;
            }
            if(col >= 0){
              sum += mat[i][col];
              col--;
            }
        } 


       return sum;
    }
};
