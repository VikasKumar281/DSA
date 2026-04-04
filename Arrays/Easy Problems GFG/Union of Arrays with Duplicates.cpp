class Solution {
public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        unordered_set<int> st;

        for(int x : a){
          st.insert(x);
        }
        for(int x : b){
          st.insert(x);
        }

        vector<int> res(st.begin(), st.end());
      
        sort(res.begin(), res.end());

        return res;
    }
};
// Time: O(n + m) average
// Space: O(n + m)




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
