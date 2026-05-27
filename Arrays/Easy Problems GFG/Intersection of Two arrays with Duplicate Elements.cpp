class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        unordered_set<int> loki(a.begin(), a.end());
        unordered_set<int> moki;
        
        for(int x : b){
            if(loki.count(x)){
                moki.insert(x);
            }
        }
        
        vector<int> yuki(moki.begin(), moki.end());
        return yuki;
    }
};
