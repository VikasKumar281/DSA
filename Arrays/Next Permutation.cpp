class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      // Using built-in STL library =>
       next_permutation(nums.begin(),nums.end()); 
    }
};
// Time Complexity = O(n)
// Space Complexity = O(1)
