class Solution {
  public:
    int findIndex(string& str) {
        int n = str.length();
        int rightClose = 0;
        for(char c : str)
            if(c == ')'){
                rightClose++;
            }
        
        int leftOpen = 0;
        for(int i = 0; i < n; i++) {
            if(leftOpen == rightClose){
                return i;
            }
            if(str[i] == '(')
                leftOpen++;
            else
                rightClose--;
        }
        
        if(leftOpen == rightClose){
            return n;
        }
            
        return -1;
    }
};
