class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n = nums.size();

        int ans = INT_MAX;
        int lastOne = -1, lastTwo = -1;
        
        for(int i =0;i<n;i++){
           if(nums[i] == 1){
            lastOne = i;
            if(lastTwo != -1){
               ans = min(ans, abs(i - lastTwo));
            }
           }
           if(nums[i] == 2){
            lastTwo = i;
            if(lastOne != -1){
               ans = min(ans, abs(i - lastOne));
            }
           }
        }

        if(ans == INT_MAX){
            return -1;
        }

        return ans;
    }
};
//T.C. = O(N)
//S.C. = O(1)
