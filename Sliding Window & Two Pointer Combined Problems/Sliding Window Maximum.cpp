class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;

        for(int i = 0;i<=n-k;i++){
          int maxi = INT_MIN;
          for(int j = i;j<i+k;j++){
            maxi = max(maxi, nums[j]); 
          }
          ans.push_back(maxi);
        }

        return ans;
    }
};
//T.C. = O(N * K)
//S.C. = O(N)
