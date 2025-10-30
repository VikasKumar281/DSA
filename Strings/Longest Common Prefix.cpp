class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        int n = strs.size();

        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[n-1];

        int minLength = min(first.size() , last.size());
      
        string ans = "";
        for(int i =0;i < minLength;i++){
            if(first[i] != last[i]){
                break;
            }

            ans = ans+first[i];
        }

        return ans;
    }
};
