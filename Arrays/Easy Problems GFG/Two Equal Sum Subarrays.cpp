class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        long long total = 0;

        for(int x : arr) {
            total += x;
        }

        long long prefix = 0;

        for(int i = 0; i < arr.size() - 1; i++) {
            prefix += arr[i];

            if(prefix == total - prefix) {
                return true;
            }
        }

        return false;
    }
};
