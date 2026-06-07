class Solution {
public:
    int smallestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int ans = INT_MAX;

        vector<int> freq(3, 0);

        for(int right = 0; right < n; right++) {
            freq[s[right] - '0']++;

            while(freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {
                ans = min(ans, right - left + 1);

                freq[s[left] - '0']--;
                left++;
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};





class Solution {
  public:
    int smallestSubstring(string s) {
        int n = s.size();
        int mini = INT_MAX;

        for(int i =0;i<n;i++){
            int has0 = 0, has1 = 0, has2 = 0;
            if(s[i] == '0'){
                has0++;
            }
            if(s[i] == '1'){
                has1++;
            }
            if(s[i] == '2'){
                has2++;
            }
            for(int j = i+1;j<n;j++){
               if(s[j] == '0'){
                  has0++;
               }
               if(s[j] == '1'){
                  has1++;
               }
               if(s[j] == '2'){
                 has2++;
                }
                
                if(has0 > 0 && has1 > 0 && has2 > 0){
                    mini = min(mini, (j-i+1));
                }
            }
        }
        
        return mini == INT_MAX ? -1 : mini;
    }
};
