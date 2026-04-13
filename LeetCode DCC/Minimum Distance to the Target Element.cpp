class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        
        int miniDist = INT_MAX;
        for(int i =0;i<n;i++){
            if(nums[i] == target){
                miniDist = min(miniDist, abs(i-start));
            }
        }

       return miniDist;
    }
};
