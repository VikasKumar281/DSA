class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> prefixSum(n), suffixSum(n);

        prefixSum[0] = nums[0];
        for(int i =1;i<n;i++){
            prefixSum[i] = max(prefixSum[i-1], nums[i]);
        }

        suffixSum[n-1] = nums[n-1];
        for(int i =n-2;i>=0;i--){
            suffixSum[i] = min(suffixSum[i+1], nums[i]);
        }        

        for(int i = 0;i<n;i++){
            if(prefixSum[i] - sufixSum[i] <= k){
                return i;
            }
        }

        return -1;
    }
};




class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for(int i = 0;i<n;i++){
            int maxi = INT_MIN;
            int mini = INT_MAX;
            
            for(int j =0;j<=i;j++){
                if(nums[j] > maxi){
                    maxi = nums[j];
                }
            }
            
            for(int k =i;k<n;k++){
                if(nums[k] < mini){
                    mini = nums[k];
                }
            }

            if(maxi - mini <= k){
                return i;
            }
        }

        return -1;
    }
};
