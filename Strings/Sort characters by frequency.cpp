class Solution {
public:
    string frequencySort(string s) {
      int freq[256] = {0};
        for(char c : s) freq[c]++;
        vector<pair<int,char>> v;
        for(int i = 0; i < 256; i++)
            if(freq[i] > 0) v.push_back({freq[i], (char)i});
        sort(v.rbegin(), v.rend());
        string ans = "";
        for(auto &p : v) ans.append(p.first, p.second);
        return ans;  
    }
};
