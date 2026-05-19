class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        int maxi = 0;
        int count = 0;
        
        for(int i = 0;i <arr.size();i++){
            if(arr[i] >= maxi){
                count++;
                maxi = arr[i];
            }
        }
        
        return count;
    }
};
