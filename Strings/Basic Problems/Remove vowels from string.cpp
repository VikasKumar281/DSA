class Solution {
  public:
    string removeVowels(string& s) {
        string temp = "";
        set<char> st = {'a' , 'e' , 'i','o','u'};
        
        for(int i =0;i<s.size();i++){
            if(st.find(s[i]) == st.end()){
                temp.push_back(s[i]);
            }
        }
        
        return temp;
    }
};
