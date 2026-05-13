class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n = nums.size();

        vector<int> diff(2 * limit + 2, 0);

        for (int i = 0; i < n / 2; i++) {
            int a = nums[i];
            int b = nums[n - i - 1];

            if (a > b) {
                swap(a, b);
            }

            diff[2] += 2;
            diff[a + 1]--;

            int sum = a + b;

            diff[sum]--;
            diff[sum + 1]++;

            diff[b + limit + 1]++;
        }

        int ans = n;
        int cur = 0;

        for (int i = 2; i <= 2 * limit; i++) {
            cur += diff[i];
            ans = min(ans, cur);
        }

        return ans;
    }
};
