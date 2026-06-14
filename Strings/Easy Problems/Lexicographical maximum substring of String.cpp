class Solution {
  public:
    string lexicographicalMaxString(string &s) {
    string ans = "";

    for (int i = 0; i < s.size(); i++) {
        string curr = s.substr(i);

        if (curr > ans)
            ans = curr;
    }

    return ans;
    }
};
