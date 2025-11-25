class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
     unordered_map<int, int> freq;
    for (int x : arr) freq[x]++;

    vector<vector<int>> result;

    set<int> nums(arr.begin(), arr.end());
    
    for (int x : nums) {
        if (x < 0 && nums.count(-x)) {
            result.push_back({x, -x});
        }
    }

    if (freq[0] >= 2) {
        result.push_back({0, 0});
    }

    return result;
        
    }
};
