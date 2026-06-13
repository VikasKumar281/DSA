class Solution {
  public:
    int findLength(string& s) {
        int n = s.size();
        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + (s[i] - '0');
        }

        int ans = 0;

        for (int len = 2; len <= n; len += 2) {
            int half = len / 2;

            for (int i = 0; i + len <= n; i++) {
                int leftSum = prefix[i + half] - prefix[i];
                int rightSum = prefix[i + len] - prefix[i + half];

                if (leftSum == rightSum) {
                    ans = max(ans, len);
                }
            }
        }

        return ans;  
    }
};
