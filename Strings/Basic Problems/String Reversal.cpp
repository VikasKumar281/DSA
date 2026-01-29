string reverseString(string s) {
  set<int>st;
  string ans = "";
   for(int i = s.size()-1;i>=0;i--){
       if(s[i] != ' ' && !st.count(s[i])){
           ans.push_back(s[i]);
           st.insert(s[i]);
       }
   }
   
   return ans;
}
