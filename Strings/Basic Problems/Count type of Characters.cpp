class Solution {
  public:
    vector<int> count(string s) {
        vector<int>ans(4, 0);

        for(char c:s){
            if(c>='A' && c<='Z'){
                ans[0]++;
            }
            else if(c>='a' && c<='z'){
                ans[1]++;
            }
            else if(c >='0' && c<='9'){
                ans[2]++;
            }
            else{
                ans[3]++;
            }
        }

        return ans;
    }
};
