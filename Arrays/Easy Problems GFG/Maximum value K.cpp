class Solution {
  public:
    int findMaximumNum(vector<int>& arr) {
        int n = arr.size();

        sort(arr.begin(), arr.end());

        int ans = 0;

        for(int i = 0; i < n; i++) {
            int k = n - i;

            if(arr[i] >= k) {
                ans = k;
                break;
            }
        }

        return ans;
    }
};
