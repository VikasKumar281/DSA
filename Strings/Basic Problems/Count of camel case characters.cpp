class Solution {
  public:
    int countCamelCase(string s){
        int count =0;
        for(int i =0;i<s.size();i++){
            if((s[i] - 'a') < 0){
                count++;
            }
        }  
        
        return count;
    }
};


class Solution {
  public:
    int countCamelCase(string s){
        int count =0;
        for(int i =0;i<s.size();i++){
            if(s[i] != tolower(s[i])){
                count++;
            }
        }  
        return count;
    }
}; 
