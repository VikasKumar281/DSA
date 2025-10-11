class Solution {
private:
    int max(vector<int>& nums){
        int maxi = INT_MIN;
        int n = nums.size();
       
       for(int i =0;i<n;i++){
         if(nums[i] > maxi){
            maxi = nums[i];
         }
       }
       
       return maxi;
    }
    int sum(vector<int>& nums , int mid){
        int sum =0;
        int n = nums.size();

        // for(int i : nums){
        //     sum = sum + ( i + mid - 1)  / mid;
        // }

        for(int i =0;i<n;i++){
            sum += ceil((double)nums[i] / (double)mid);
        }
        return sum;
    }    
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = max(nums);

        while (start <= end) {
          int mid = start + (end - start) / 2;
          if (sum(nums , mid) <= threshold) {
            end = mid - 1;
          }
          else {
            start = mid + 1;
          }
        }

      return start;
    }
};
