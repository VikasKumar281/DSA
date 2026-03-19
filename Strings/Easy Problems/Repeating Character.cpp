class Solution {
  public:
    int repeatedCharacter(string& s) {
        vector<int> first(256, -1);
        int ans = INT_MAX;

        for(int i = 0; i < s.size(); i++){
            if(first[s[i]] ==-1){
                first[s[i]] = i;
            } 
            else{
                ans =min(ans,first[s[i]]);
            }
        }

        return ans ==INT_MAX ?-1:ans;
    }
};
