class Solution {
  public:
    bool isPaintingPossible(vector<int> &nums,int k , int mid){
        int painter = 1;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
           if(sum + nums[i] <= mid){
             sum += nums[i];
           }
           else{
             painter++;
             sum = nums[i];
           }
        }

        return painter <= k;
    }
    int minTime(vector<int>& arr, int k) {
        if(k > arr.size()){
            return -1;
        }
        
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(),arr.end(),0);
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(isPaintingPossible(arr,k, mid)){
               high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return low;
    }
};
// Time Complexity: O(n logS)
// Space Complexity: O(1)
