class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        string ans ="";
        unordered_map<char,int> mp;
        for(char ch : s2){
            mp[ch]++;
        }
        int i = 0;
        while(i < s1.size()){
            if(mp.find(s1[i]) == mp.end()){
                ans.push_back(s1[i]);
                mp[s1[i]]++;
            }
            i++;
        }
        
        mp.clear();
        
        for(char ch : s1){
            mp[ch]++;
        }
        i =0;
        while(i < s2.size()){
            if(mp.find(s2[i]) == mp.end()){
                ans.push_back(s2[i]);
                mp[s2[i]]++;
            }
            i++;
        }
        
        if(ans == ""){
            return "-1";
        }
        
        sort(ans.begin(),ans.end());     
        return ans;
    }
};

// Total Time Complexity = O(n+m)
// Space Complexity = O(1)

