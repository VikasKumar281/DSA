class Solution {
  public:
    bool formatArray(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int mid = (n +1)/2;

        for(int i = 0;i< n/2;i++){
            if(arr[i] >= arr[mid + i]){
                return false;
            }
        }

        return true;
    }
};
