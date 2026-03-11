class Solution {
public:
    long long ExtractNumber(string sentence) {
        stringstream ss(sentence);
        string word;
        long long ans = -1;

        while(ss >>word){
            bool isNum =true;
            for(char c : word){
                if(!isdigit(c)){
                    isNum = false;
                    break;
                }
            }
            if(isNum &&word.find('9') ==string::npos){
                long long num =stoll(word);
                ans = max(ans, num);
            }
        }

        return ans;
    }
};
