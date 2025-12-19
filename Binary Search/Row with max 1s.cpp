class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int m = arr.size();
        int n = arr[0].size();
        
        int row = -1;
        int col = n-1;
        
        for(int i = 0;i<m;i++){
           while(col >= 0 && arr[i][col] == 1){
               row = i;
               col--;
           }
        }
        
        return row;
    }
};
//T.C. = O(m + n)
//S.C. = O(1)



class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int m = arr.size();
        int n = arr[0].size();
        
        int maxi = 0;
        int count =0;
        int row = -1;
        
        for(int i = 0;i<m;i++){
            for(int j =0;j<n;j++){
              if(arr[i][j] == 1){
                 count++;
              }
            }
            if(maxi < count){
              maxi = max(maxi , count);
              row = i;
            }
            count = 0;
        }
        
        return row;
    }
};
//T.C. = O(m * n)
//S.C. = O(1)
