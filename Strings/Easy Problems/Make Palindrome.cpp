class Solution {
  public:
    bool makePalindrome(int n, vector<string> &arr) {
        unordered_map<string, int>mp;
        
        for(auto &s :arr){
            mp[s]++;
        }
        
        int center = 0;
        
        for(auto &it :mp){
            string s =it.first;
            int cnt =it.second;
            
            string rev =s;
            reverse(rev.begin(), rev.end());
            
            if(s ==rev){
                if(cnt % 2!=0){
                    center++;
                }
            } 
            else{
                if(mp[s] != mp[rev]) return false;
            }
        }
        
        return center <= 1;
    }
};
