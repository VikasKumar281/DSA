class Solution {
  public:
    // arr[] is the array
    long long int product(vector<int> &arr) {
        int n = arr.size();
        long long mod = 1000000007;
        long long ans = 1;

        for(int i = 0; i < n; i++){
            ans = (ans*arr[i])% mod;
        }

        return ans;
    }
};
