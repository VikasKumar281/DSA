class Solution {
  public:
    int countWords(string &s) {
        int n = s.size();
        int count =0;
        int i = 0;
        if(s == ""){
            return 0;
        }
        
        for(int i =0;i<n;i++){
            if(s[i] == ' '){
                count++;
            }
        }
        
        return count+1;
    }
};
