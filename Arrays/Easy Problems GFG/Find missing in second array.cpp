class Solution {
  public:
    vector<int> findMissing(vector<int>& a, vector<int>& b) {
        unordered_set<int>s(b.begin(), b.end());
        
        vector<int> ans;
        
        for(int i = 0; i < a.size();i++){
            if(s.find(a[i]) ==s.end()){
                ans.push_back(a[i]);
            }
        }
        
        return ans;
    }
};
