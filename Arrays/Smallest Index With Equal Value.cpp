class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int n = nums.size();
        
        int mini = INT_MAX;
        for(int i =0;i<n;i++){
            if(nums[i] == i % 10){
                mini = min(mini, i);
            }
        }

        return mini == INT_MAX ? -1 : mini;
    }
};
