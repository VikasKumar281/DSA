class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
       int n = s.size();
       string temp = "";
       
       temp.push_back(s[0]);
       for(int i=1;i<n;i++){
           if(s[i-1] != s[i]){
               temp.push_back(s[i]);
           }
       }
       
       return temp;
    }
};
