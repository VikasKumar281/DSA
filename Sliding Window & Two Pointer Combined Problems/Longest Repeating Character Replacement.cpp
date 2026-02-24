class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        
        int left = 0 , right = 0, maxLen = 0;
        
        for(int i = 0;i<n;i++){
           vector<int>freq(26,0);
           int maxfreq = 0;
           for(int j = i;j<n;j++){
            freq[s[j] - 'A']++;
            maxfreq = max(maxfreq , freq[s[j] - 'A']);
            int changes = (j - i + 1) - maxfreq;

            if(changes <= k){
                maxLen = max(maxLen , j - i + 1);
            }
            else{
                break;
            }
           }
        }

        return maxLen;
    }
};
//T.C. = O(N^2)
//S.C. = O(N)
