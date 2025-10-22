class Solution {
private:
    bool isValid(char ch){
        if((ch>='a' && ch<='z')||(ch >='A' && ch<='Z')||(ch>='0' && ch<='9')){
            return 1;
        }

        return 0;
    }

    char toLowerCase(char ch){
        if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
            return ch;
        }
        else{
            char lower = ch - 'A' + 'a';
            return lower;
        }
    }    
    
    bool checkPalindrome(string &temp){
        int n = temp.size();

        int i = 0 , j = n -1;
        while(i<=j){
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
    bool isPalindrome(string s) {
        int n = s.size();
        
        string temp = "";

        for(int i =0;i<n;i++){
            if(isValid(s[i])){
                temp.push_back(s[i]);
            }
        }

        for(int j = 0;j<temp.size();j++){
            temp[j] = toLowerCase(temp[j]);
        }

        return checkPalindrome(temp);
        
    }
};
