class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        int n = arr.size();
        vector<int> nums;
        
        sort(arr.begin(), arr.end());
        
        for(int i =0;i<n;i++){
            if(nums.empty()){
                nums.push_back(arr[i]);
            }
            if(nums.back() == arr[i]){
                continue;
            }
            nums.push_back(arr[i]);
        }
        
        return nums;
    }
};
