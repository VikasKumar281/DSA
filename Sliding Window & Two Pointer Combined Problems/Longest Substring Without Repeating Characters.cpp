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
