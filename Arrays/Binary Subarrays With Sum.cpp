
// TLE Shows on LeetCode
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int count = 0;
       
        for(int i =0;i<n;i++){
            int sum = 0;
            for(int j =i;j<n;j++){
                sum += nums[j];
                if(sum == goal){
                    count++;
                }
            }
        }
        return count;
    }
};
// Time complexity = O(n²).
// Space complexity = O(1).
