class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        
        vector<int>freq(26,0);
        int maxfreq = 0, maxLen = 0;
        int left = 0 , right = 0;
        
        while(right < n){
          freq[s[right] - 'A']++;
          maxfreq = max(maxfreq , freq[s[right] - 'A']);
          
          int change = (right - left + 1) - maxfreq; 
          
          while(change > k){   
            freq[s[left]-'A']--;
            left++;
            change = (right - left + 1) - maxfreq;
          } 

          maxLen = max(maxLen , right - left + 1);
          right++;
        }

        return maxLen;
    }
};
//T.C. = O(N)
//S.C. = O(1)





class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        
        int maxLen = 0;
        
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
//S.C. = O(1)
