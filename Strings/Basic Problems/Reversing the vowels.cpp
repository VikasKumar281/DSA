class Solution {
  public:
    bool isVowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    string modify(string& s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            while (l < r && !isVowel(s[l])){
              l++;
            }
            while(l < r && !isVowel(s[r])){
              r--;
            }

            if (l < r) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }

        return s;
    }
};
