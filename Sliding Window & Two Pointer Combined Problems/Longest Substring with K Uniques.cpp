class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int n = s.size();
        
        unordered_map<char, int> mpp;
        
        int left = 0, maxLen = -1, right = 0;
        while(right<n){
            mpp[s[right]]++;
            if(mpp.size() == k){
                maxLen = max(maxLen , right-left+1);
            }
            while(mpp.size() > k){
                mpp[s[left]]--;
                if(mpp[s[left]] == 0){
                    mpp.erase(s[left]);
                }
                left++;
            }
            right++;
        }
        
        
        return maxLen;
    }
};
//T.C. = O(N)
//S.C. = O(1)



class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int n = s.size();
        
        unordered_map<char,int> mp;
        int maxlen = -1;
        
        
        for(int i = 0;i<n;i++){
            mp.clear();
            for(int j =i;j<n;j++){
                mp[s[j]]++;
                if(mp.size() <= k){
                    maxlen = max(maxlen, j - i + 1);
                }
                else{
                    break;
                }
            }
        }
        
        return maxlen;
    }
};
//T.C. = O(N^2)
//S.C. = O(1)
