class Solution {
  public:
    string firstRepChar(string s) {
       int n = s.size();
       string temp = "";
       unordered_map<int,int> mp;
       for(char c: s){
           if(mp.find(c) == mp.end()){
             mp[c]++;
           }
           else{
               temp.push_back(c);
               return temp;
           }
       }
       
       return "-1";
    }
};
