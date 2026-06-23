class Solution {
public:
    int fun(string s, int k, int n, char c) {
        int cnt = 0;

        for (char ch : s) {
            if (ch == c) cnt++;
        }

        int len = s.size();
        int full = n / len;
        int rem = n % len;

        int ans = full * cnt;

        for (int i = 0; i < rem; i++) {
            if (s[i] == c){
                ans++;
            }
        }

        return ans;
    }
};
