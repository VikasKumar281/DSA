class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> posArr;
        vector<int> negArr;
        
        for(int i =0;i<n;i++){
            if(arr[i] >= 0){
                posArr.push_back(arr[i]);
            }
            else{
                negArr.push_back(arr[i]);
            }
        }
        
        
        int i =0;
        while(i<posArr.size()){
            arr[i] = posArr[i];
            i++;
        }
        
        int j = 0;
        while(j< negArr.size()){
            arr[i] = negArr[j];
            i++;
            j++;
        }
        
    }
};
