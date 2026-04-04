class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
      set<int> st;
      for(int i: a){
          st.insert(i);
      }
      
      for(int i: b){
          st.insert(i);
      }
      
      vector<int> arr;
      for(int i: st){
          arr.push_back(i);
      }
      
      return arr;
    }
};
// Time: O((n + m) log(n + m))
// Space: O(n + m)
