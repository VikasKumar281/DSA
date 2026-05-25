class Solution {
public:
    int n;
    int solve(int idx, string& s, int minJump, int maxJump, vector<int>& t) {
        // reached last index
        if (idx == n - 1) {
            return true;
        }
        if (t[idx] != -1) {
            return t[idx];
        }
        // try every possible jump
        for (int jump = minJump; jump <= maxJump; jump++) {
            int j = idx + jump;
            // out of bounds
            if (j >= n) {
                break;
            }
            // can only jump on '0'
            if (s[j] == '0') {
                if (solve(j, s, minJump, maxJump, t)) {
                    return t[idx] = true;
                }
            }
        }
        return t[idx] = false;
    }

    bool canReach(string s, int minJump, int maxJump) {
        n = s.length();
        vector<int> t(n, -1);
        return solve(0, s, minJump, maxJump, t);
    }
};
