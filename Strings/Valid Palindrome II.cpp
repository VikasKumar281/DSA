class Solution {
private:
    bool checkPalindrome(string &temp , int i , int j){
        while(i <= j){
            if(temp[i] != temp[j]){
               return 0;
            }
            else{
                i++;
                j--;
            }
        }
        return 1;
    }    
public:
    bool validPalindrome(string s) {
        int n = s.size();
        
        int i = 0;
        int j = n -1;

        while(i <= j){
           if(s[i] != s[j]){
            // Skip one character: either i or j ---->
            return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
           }

           i++;
           j--;
        }

        return 1;
    }
};
