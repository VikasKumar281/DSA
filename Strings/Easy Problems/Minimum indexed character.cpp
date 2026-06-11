class Solution {
  public:
    int minIndexChar(string &s1, string &s2) {
        unordered_set<char> st;

        for (char ch : s2) {
            st.insert(ch);
        }

        for (int i = 0; i < s1.size(); i++) {
            if (st.count(s1[i])) {
                return i;
            }
        }

        return -1;
    }
};



class Solution {
  public:
    string printMinIndexChar(string S, string patt) {
        int n1 = S.size();
        int n2 = patt.size();
        
        unordered_map<int,int> mp;
        
        for(int i =0;i<n2;i++){
            mp[patt[i]]++;
        }
        
        string temp = "";
        for(int i = 0;i<n1;i++){
            if(mp.find(S[i]) != mp.end()){
                temp.push_back(S[i]);
                return temp;
            }
        }
        
        return "$";
    }
};
