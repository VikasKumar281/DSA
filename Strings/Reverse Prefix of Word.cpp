class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();

        for(int i = 0; i < n; i++){
            if(word[i] == ch){
                int a = 0 , b = i;
                while(a <= b){
                  swap(word[a],word[b]);
                  a++;
                  b--;
                }
                // Only reverse the first occurence -------------->
                break;
            }
        }

        return word;
    }
};
