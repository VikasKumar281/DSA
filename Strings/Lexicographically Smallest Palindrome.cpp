class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.size();
        int i = 0,j = n-1;
        while(i<=j){
            if(s[i] !=s[j]){
                int asc1 = (int)s[i];
                int asc2 = (int)s[j];
                if(asc1 <= asc2){
                  s[j] = s[i];
                }
                else{
                  s[i] = s[j];
                }
            }
            i++;
            j--;
        }

        return s;
    }
};
