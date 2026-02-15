class Solution {
  public:
    string removeDuplicates(string &s) {
        string temp = "";
        int n = s.size();
        unordered_set<char> st;
        for(char c: s){
            if(st.find(c) == st.end()){
                temp.push_back(c);
                st.insert(c);
            }
        }
        
        return temp;
    }
};
