class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> nums(n+1);
        
        nums[0] = 0;
        nums[1] = gain[0];
        for(int i=1;i<n;i++){
            nums[i+1] = nums[i] + gain[i];
        }

        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(maxi < nums[i]){
                maxi = nums[i];
            }
        }


        return maxi;
    }
};
