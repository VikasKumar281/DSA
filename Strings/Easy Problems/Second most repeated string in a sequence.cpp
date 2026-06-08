class Solution {
  public:
    int secFrequent(vector<string> &arr) {
        unordered_map<string, int> freq;

        for (auto &s : arr) {
            freq[s]++;
        }

        if (freq.size() <= 1) return -1;

        int first = -1, second = -1;

        for (auto &it : freq) {
            int cnt = it.second;

            if (cnt > first) {
                second = first;
                first = cnt;
            } else if (cnt < first && cnt > second) {
                second = cnt;
            }
        }

        return second;
    }
};
