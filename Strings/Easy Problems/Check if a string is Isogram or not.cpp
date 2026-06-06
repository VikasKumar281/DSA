class Solution {
  public:
    bool isIsogram(string& s) {
        vector<int> freq(26, 0);
        for(char ch:s){
            if(freq[ch - 'a'] >0){
                return false;
            }
            
            freq[ch - 'a']++;
        }

        return true;
    }
};
