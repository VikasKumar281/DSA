class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        map<int,int> mp;

        for(int x :arr){
            mp[x]++;
        }
        vector<vector<int>>result;

        for(auto &p : mp){
            result.push_back({p.first, p.second});
        }

        return result;
    }
};
