class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int duplicate = -1 , missing = -1;  

        for(int i =0;i<n-1;i++){
           if(nums[i] == nums[i+1]){
             duplicate = nums[i];
             break;
           }
        }

        long long expected_sum = (long long) n * (n+1)/2;
        long long actual_sum =0;

        for(int x: nums){
            actual_sum = actual_sum + x;
        }

        missing = expected_sum - (actual_sum - duplicate); 

        return {duplicate , missing};
    }
};
