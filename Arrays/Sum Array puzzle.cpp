class Solution {
  public:
    void sumArray(vector<int> &arr) {
        long long s = 0;
        for(int x :arr) {
          s += x;
        }
        for(int i =0;i<arr.size();i++){
          arr[i] = s -arr[i];
        }
    }
};
