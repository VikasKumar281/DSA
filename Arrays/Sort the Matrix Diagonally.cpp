class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        //FIRST LOOP: Diagonals starting from TOP ROW -------------------->
        for(int col = 0;col<n;col++){
           int i = 0,j = col;
           vector<int> diag;
           while(i<m && j<n){
            diag.push_back(mat[i][j]);
            i++;
            j++;
           }

           sort(diag.begin(),diag.end());
           i =0,j=col;
           int k =0;
           while(i<m && j<n){
            mat[i][j] = diag[k++];
            i++;
            j++;
           }
        }


        //SECOND LOOP: Diagonals starting from left column -------------------->
        for(int row = 1;row<m;row++){
           int i = row,j = 0;
           vector<int> diag;
           while(i<m && j<n){
            diag.push_back(mat[i][j]);
            i++;
            j++;
           }

           sort(diag.begin(),diag.end());
           i =row,j=0;
           int k =0;
           while(i<m && j<n){
            mat[i][j] = diag[k++];
            i++;
            j++;
           }
        }

        return mat;
    }
};
