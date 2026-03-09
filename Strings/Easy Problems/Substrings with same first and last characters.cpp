class Solution {
  public:
    int countSubstring(string &s) {
        vector<long long> freq(26,0);
        
        for(char c : s){
            freq[c-'a']++;
        }
        
        long long ans = 0;
        
        for(int i = 0; i < 26; i++){
            long long f = freq[i];
            ans += (f * (f+1))/2;
        }
        
        return ans;
    }
};
