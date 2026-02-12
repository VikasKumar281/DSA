class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            vector<int> cnt(26, 0);

            for (int j = i; j < n; j++) {
                cnt[s[j] - 'a']++;

                int mn = 1e9, mx = 0;

                for (int k = 0; k < 26; k++) {
                    if (cnt[k] > 0) {
                        mn = min(mn, cnt[k]);
                        mx = max(mx, cnt[k]);
                    }
                }

                if (mn == mx) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};
