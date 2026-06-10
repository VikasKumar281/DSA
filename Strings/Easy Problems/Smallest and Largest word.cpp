class Solution {
  public:
    vector<string> smallerAndLarge(string &s) {
    string word;
    string minWord, maxWord;
    int minLen = INT_MAX, maxLen = 0;

    stringstream ss(s);

    while (ss >> word) {
        int len = word.size();

        if (len < minLen) {
            minLen = len;
            minWord = word;
        }

        if (len >= maxLen) {
            maxLen = len;
            maxWord = word;
        }
    }

    return {minWord, maxWord};
    }
};
