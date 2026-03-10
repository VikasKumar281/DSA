class Solution {
public:
    int solve(vector<int>& nums, int goal){
        int n = nums.size();
        if(goal < 0){
            return 0;
        }

        int left = 0, sum = 0, count = 0;
  
        for(int right = 0;right < n;right++){
            sum += (nums[right] % 2);
            while(sum > goal){
                sum -= (nums[left] % 2);
                left++;
            }
            count += (right - left + 1);
        }

        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return solve(nums,goal) - solve(nums,goal - 1);
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return numSubarraysWithSum(nums,k);
    }
};
