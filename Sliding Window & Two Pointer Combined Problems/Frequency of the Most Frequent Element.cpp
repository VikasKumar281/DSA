class Solution {
public:
    int binSearch(int target_idx, int k , vector<int> &nums, vector<long long> &prefixSum){
        int target = nums[target_idx];

        int left = 0;
        int right = target_idx;

        int best_idx = target_idx;
        while(left <= right){
            int mid = left + (right - left)/2;

            long long count = target_idx - mid + 1;
            long long windowSum = count * target;
            long long originalSum = prefixSum[target_idx] - prefixSum[mid] + nums[mid];

            int operations = windowSum - originalSum;

            if(operations > k){
                left = mid + 1;
            }
            else{
                best_idx = mid;
                right = mid - 1; 
            }
        }
      
       return target_idx - best_idx + 1;
    }
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();

        sort(nums.begin(),nums.end());

        vector<long long> prefixSum(n);
        prefixSum[0] = nums[0];
        for(int i =1;i<n;i++){
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }
        
        int result = 0;
        for(int target_idx = 0;target_idx < n; target_idx++){
            result = max(result , binSearch(target_idx, k, nums, prefixSum));
        }

        return result;
    }
};
