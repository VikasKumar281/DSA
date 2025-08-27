class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
       int longest = 0;
       int n = nums.size();
       int left = 0;
       int right = 0;
       int sum = nums[0];

       while(right < n){
          right++;
          if(right < n){
            sum = sum + nums[right];
          }

          while(left <= right  && sum > k){
            sum = sum - nums[left];
            left++;
          }

          if(sum == k){
            longest = max(longest , right-left+1);
          }
       } 
       return longest;
    }
};
