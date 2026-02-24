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
