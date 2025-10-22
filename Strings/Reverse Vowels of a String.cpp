class Solution {
private:
    bool isVowel(char s){
        s = tolower(s);
        if(s == 'a' || s == 'e' || s=='i' || s=='o' || s == 'u'){
            return 1;
        }

        return 0;
    }    
public:
    string reverseVowels(string s) {
        int n = s.size();

        int i =0 , j = n-1;
        while(i<j){
            if(!isVowel(s[i])){
                i++;
                continue;
            }
            if(!isVowel(s[j])){
                j--;
                continue;
            }
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        } 

        return s;
    }
};
