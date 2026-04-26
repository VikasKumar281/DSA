class Solution {
  public:
    int maxZeros(vector<vector<int>> arr) {
      int n = arr.size();
      int maxi = -1;
      
      int col = 0;
      int colIndex = -1;
      while(col < n){
        int count = 0;  
        for(int i =0;i<n;i++){
           if(arr[i][col] == 0){
              count++;
            }
        }
        if(maxi < count){
          maxi = count;
          colIndex = col;
        }
        col++;
      }
      
      if(maxi == 0){
          return -1;
      }
      
      
      return colIndex;
    }
};
