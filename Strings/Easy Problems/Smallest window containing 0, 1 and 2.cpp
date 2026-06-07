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
