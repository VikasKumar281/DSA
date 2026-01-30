class Solution {
public:
       int atMost(vector<int>& nums, int goal) {
        int n = nums.size();
        if(goal < 0){
            return 0;
        }

        int left =0 , sum = 0 , count = 0;
        for(int right = 0; right < n;right++){
            sum = sum + nums[right];

            while(sum > goal){
                sum -= nums[left];
                left++;
            }

            count += (right - left + 1); 
        }

        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums , goal) - atMost(nums , goal- 1);
    }
};
//T.C. = O(N)
//S.C. = O(N)
