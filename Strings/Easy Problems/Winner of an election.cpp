class Solution {
  public:
    vector<string> winner(string arr[], int n) {
        unordered_map<string, int> mp;

        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        string name = "";
        int votes = 0;

        for(auto &it : mp) {
            if(it.second > votes) {
                votes = it.second;
                name = it.first;
            }
            else if(it.second == votes && it.first < name) {
                name = it.first;
            }
        }

        return {name, to_string(votes)};
    }
};
