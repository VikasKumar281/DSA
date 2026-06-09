class Solution {
  public:
    static char extraChar(string s1, string s2) {
        char ans = 0;

        for (char c : s1) {
            ans ^= c;
        }
        for(char c : s2){
            ans ^=c;
        }

        return ans;
    }
};
