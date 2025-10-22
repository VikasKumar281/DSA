class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>result;
        int n = nums.size();

        for(int i =0;i<n;i++){
         for(int j =0;j<n;j++){
           if(nums[j] == key && abs(i-j) <= k){
                result.push_back(i);
                break;
           }
        }
        }

        return result;
    }
};





class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> res;
        int r = 0;  
        int n = nums.size();
        for (int j = 0; j < n; ++j) {
            if (nums[j] == key) {
                int l = max(r, j - k);
                r = min(n - 1, j + k) + 1;
                for (int i = l; i < r; ++i) {
                    res.push_back(i);
                }
            }
        }
        return res;
    }
};
