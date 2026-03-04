class Solution {
  public:
    int count(string& s) {
        int freq[26] = {0};
        
        for(char c : s) {
            freq[c - 'a']++;
        }
        
        int ans = 0;
        
        for(int i = 0; i < 26; i++) {
            if(freq[i] > 0 && freq[i] % 2 == 0) {
                ans++;
            }
        }
        
        return ans;
    }
};
