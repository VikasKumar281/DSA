class Solution {
  public:
    string toggleCase(string &s) {
        for(int i =0; i <s.size();i++){
            if(s[i]>='a'&&s[i] <= 'z'){
                s[i] = s[i] - 'a' +'A';
            }
            else if(s[i] >='A' && s[i] <= 'Z'){
                s[i] = s[i] - 'A' + 'a';
            }
        }
        return s;
    }
};
