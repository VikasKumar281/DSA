// Optimal Code => 
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left =0;
        int right = nums.size() - 1;

        while(left<=right){
            if(nums[left]%2 == 0){
                left++;
            }
            else if(nums[right]%2 != 0){
                right--;
            }
            else{
                swap(nums[left] , nums[right]);
                left++;
                right--;
            }
        }

        return nums;
    }
};

// No extra vector is used => O(1) space.
// Two pointers traverse from both ends => O(n) time.



// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans;

//         for(int i =0;i<n;i++){
//             if(nums[i]%2 == 0){
//                 ans.push_back(nums[i]);
//             }
//         }

//         for(int i =0;i<n;i++){
//             if(nums[i]%2 != 0){
//                 ans.push_back(nums[i]);
//             }
//         }

//         return ans;
//     }
// };
