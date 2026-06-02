class Solution {
  public:
    int minMoves(vector<int>& arr, int k) {
        long long mod = 1e9 + 7;
        long long ans = 0;
        
        for (int i = 1; i < arr.size(); i++) {
            
            if (arr[i] > arr[i - 1]) {
                
                long long diff = arr[i] - arr[i - 1];
                
                long long ops = (diff + k - 1) / k;
                
                ans = (ans + ops) % mod;
                
                arr[i] -= ops * 1LL * k;
            }
        }
        
        return ans % mod;
    }
};
