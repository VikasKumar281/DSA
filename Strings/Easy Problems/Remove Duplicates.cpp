class Solution {
  public:
    string removeDups(string &s) {
        bool seen[26] ={false};
        string result = "";

        for(char c : s){
            if(!seen[c -'a']){
                result +=c;
                seen[c- 'a'] =true;
            }
        }

        return result;
    }
};
