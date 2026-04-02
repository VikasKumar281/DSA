class Solution {
  public:

    string printString(string s, char ch, int count) {
        int cnt = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] ==ch){
                cnt++;
                
                if(cnt == count){
                    if(i == s.size() - 1) return "";
                    return s.substr(i + 1);
                }
            }
        }
        
        return "";
    }
};
