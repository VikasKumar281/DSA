class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int maxLength = 0, left =0;
        for(int i =0;i<s.size();i++){
            while(st.count(s[i])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[i]);
            maxLength = max(maxLength, i - left + 1);
        }

        return maxLength;
    }
};
