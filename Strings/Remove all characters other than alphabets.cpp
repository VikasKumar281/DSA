class Solution {
  public:
    string removeSpecialCharacter(string s) {
       string temp = " ";
       
       for(int i =0;i<s.size();i++){
         if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
             temp.push_back(s[i]);
         } 
         else{
             continue;
         }
       }
       
       if(temp == " "){
           return "-1";
       }
       
       return temp;
    }
};


class Solution {
  public:
    string removeSpecialCharacter(string s) {
        string temp = "";
        for(char c : s) {
            if(isalpha(c)){
               temp.push_back(c);
            }
        }

        if(temp == " "){
            return "-1";
        }

        return temp;
    }
};
