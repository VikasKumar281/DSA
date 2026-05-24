class Solution {
  public:
    long minOperations(vector<int> arr) {
        long long sum = 0;
        int n = arr.size();

        for (int x : arr) {
            sum += x;
        }

        if (sum % n != 0) {
            return -1;
        }

        long long target = sum / n;
        long long ans = 0;

        for (int x : arr) {
            if (x > target) {
                ans += (x - target);
            }
        }

        return ans;
    }
};
