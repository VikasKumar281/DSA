class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i < n - 1; i += 2) {
            if(arr[i] < arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
};
//Time: O(n)
//Space: O(1)
