class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;
        for(int i = n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }

        if(ind == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i = n-1;i>=0;i--){
            if(nums[i] > nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }

        reverse(nums.begin()+ind+1,nums.end());
    }
};
// Time Complexity = O(n)
//Space Complexity = O(1)



class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      // Using built-in STL library =>
       next_permutation(nums.begin(),nums.end()); 
    }
};
// Time Complexity = O(n)
// Space Complexity = O(1)
