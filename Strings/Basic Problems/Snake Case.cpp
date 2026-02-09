class Solution {
  public:
    string snakeCase(string S, int n) {
        string temp = "";
        
        for(int i =0;i<n;i++){
            if(S[i] != ' '){
               temp.push_back(tolower(S[i]));
            }
            else {
                temp.push_back('_');
            }
        }
        
        return temp;
    }
};
