class Solution {
public:
    int solve(vector<int>& nums, int k){
        int n = nums.size();

        unordered_map<int,int> mpp;

        int left = 0, count = 0, right = 0;
        while(right < n){
            mpp[nums[right]]++;
            while(mpp.size() > k){
                mpp[nums[left]]--;
                if(mpp[nums[left]] == 0){
                    mpp.erase(nums[left]);
                }
                left++;
            }
            count = count + (right - left + 1);
            right++;
        }

        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return solve(nums,k) - solve(nums, k-1);
    }
};
