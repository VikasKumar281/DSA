class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int sum1 = 0,sum2 =0;
        for(int i =0;i<k;i++){
            sum1 += nums[i];
            sum2 += nums[n-1-i];
        }

        int diff = sum2 - sum1;
        return diff;
    }
};
