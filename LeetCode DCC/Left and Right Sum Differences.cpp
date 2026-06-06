class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums){
        int n = nums.size();
        vector<int> leftSum(n), rightSum(n);

        for(int i=0;i<n;i++){
            if(i == 0){
              leftSum[i] = 0;
            }
            else{
              leftSum[i] = leftSum[i-1] + nums[i-1];
            } 
        }

        for(int i = n-1;i>=0;i--){
            if(i == n-1){
                rightSum[i] = 0;
            }
            else{
                rightSum[i] = rightSum[i+1] + nums[i+1];
            }
        }

        vector<int> ans(n);
        for(int i =0;i<n;i++){
            ans[i] = abs(leftSum[i] - rightSum[i]);
        }

        return ans;
    }
};
