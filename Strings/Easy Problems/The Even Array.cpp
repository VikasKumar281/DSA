class Solution {
  public:
    int convertToEven(string s) {
        int ans = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'O' && (i == 0 || s[i - 1] == 'E')) {
                ans++;
            }
        }
        
        return ans;
    }
};
