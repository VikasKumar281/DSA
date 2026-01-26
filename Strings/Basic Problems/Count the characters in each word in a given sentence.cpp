class Solution {
  public:
    vector<int> countChars(string s) {
        vector<int> res;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' '){
                cnt++;
            } 
            else {
                res.push_back(cnt);
                cnt = 0;
            }
        }
        
        if(cnt > 0){
            res.push_back(cnt);
        }
        return res;
    }
};
