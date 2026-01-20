class Solution {
  public:
    string reverseWords(string &s) {
        vector<string>words;
        string temp = "";
        for(char ch:s){
            if(ch == '.'){
                if(!temp.empty()){
                    words.push_back(temp);
                    temp = "";
                }
            }
            else{
                temp.push_back(ch);
            }
        }
        
        if(!temp.empty()){
             words.push_back(temp);
        }
        
        reverse(words.begin(),words.end());
        
        string result = "";
        for(int i =0;i<words.size();i++){
            result += words[i];
            
            if(i != words.size()-1){
                result += '.';
            }
        }
        
        return result;
    }
};
//Time: O(n)
//Space: O(n)
