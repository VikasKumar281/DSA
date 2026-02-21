class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int maxi = 0;
        unordered_map<char,int> mp;

        for(int right = 0;right<n;right++){
            if(mp.find(s[right]) != mp.end() && mp[s[right]] >= left){
               left = mp[s[right]] + 1;
            }

            mp[s[right]] = right;
            
            maxi = max(maxi, right - left + 1);
        }

        return maxi;
    }
};
//T.C = O(N);
// Space: O(1)



class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxi =0;

        for(int i =0;i<n;i++){
            unordered_map<char, int>mp;
            int count = 0;
            for(int j =i;j<n;j++){
               if(mp.find(s[j]) == mp.end()){
                mp[s[j]]++;
                count++;
               }
               else{
                break;
               }
            }
            maxi = max(maxi, count);
        }

        return maxi;
    }
};
//T.C = O(N^2);
// Space: O(1)
