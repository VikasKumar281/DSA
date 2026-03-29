class Solution {
public:
    string reverseEqn(string s) {
        vector<string>tokens;
        int n = s.size();
        
        for(int i = 0; i < n; ) {
            if(isdigit(s[i])) {
                string num = "";
                while(i < n && isdigit(s[i])) {
                    num += s[i];
                    i++;
                }
                tokens.push_back(num);
            } 
            else{
                tokens.push_back(string(1, s[i]));
                i++;
            }
        }
        
        reverse(tokens.begin(), tokens.end());
        
        string ans = "";
        for(auto &t : tokens){
            ans+=t;
        }
        
        return ans;
    }
};
