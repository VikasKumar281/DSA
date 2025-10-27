class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int> ans;

         int low = 0 , high = n;
        for(int i = 0; i<=n;i++){
            if(s[i] == 'I'){
              ans.push_back(low++);
            }
            else{
                ans.push_back(high--);
            }
        }

        return ans;
    }
};
