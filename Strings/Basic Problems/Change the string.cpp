class Solution {
  public:
    string modify(string& s) {
        
        if(islower(s[0])){
            for(char &c : s){
                c =tolower(c);
            }
        } 
        else{
            for(char &c :s){
                c = toupper(c);
            }
        }
        
        return s;
    }
};
