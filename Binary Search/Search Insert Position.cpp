class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;

        int mid;
        
        while (start <= end) {
            mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return start;
    }
};


// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int n = nums.size();
//         int start = 0;
//         int end = n-1;

//         int mid = start + (end-start)/2;
//         int ans = -1;


//         while(start<=end){
//             if(nums[mid] == target){
//                 ans = mid;
//                 return ans;
//             }
//             else if(nums[mid] > target){
//                 ans = mid;
//                 end = mid-1;
//             }
//             else{
//                 ans = mid+1;
//                 start = mid+1;
//             }
//             mid = start + (end - start)/2;
//         }

       
//        return ans;
//     }
// };
