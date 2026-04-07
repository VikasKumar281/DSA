class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        int n = arr.size();
        
        int mini = INT_MAX;
        int idx1 = -1, idx2 = -1; 
        for(int i =0;i<n;i++){
            if(arr[i] == x){
                idx1 = i;
            }
            if(arr[i] == y){
                idx2 = i;
            }
            
            if(idx1 !=-1 && idx2 != -1){
              mini = min(mini, abs(idx2-idx1));
            }
        }
        
        if(mini == INT_MAX){
            return -1;
        }
        
        return mini;
    }
};
