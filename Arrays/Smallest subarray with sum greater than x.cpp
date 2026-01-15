class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        int n = arr.size();
        int sum = 0, left = 0;
        int ans = n + 1;

        for(int right = 0; right < n; right++){
            sum += arr[right];

            while(sum > x){
                ans = min(ans, right - left + 1);
                sum -= arr[left];
                left++;
            }
        }

        return ans == n + 1 ? 0 : ans;
    }
};
