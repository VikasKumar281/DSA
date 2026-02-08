class Solution {
public:
    bool isSplitPossible(vector<int> &nums,int k , int mid){
        int part = 1;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
           if(sum + nums[i] <= mid){
             sum += nums[i];
           }
           else{
             part++;
             sum = nums[i];
           }
        }

        return part <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(isSplitPossible(nums,k, mid)){
               high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return low;
    }
};
