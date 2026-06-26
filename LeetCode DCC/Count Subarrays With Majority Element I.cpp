// Simplified Approach 2 ----------------------------------------------------------------------->
// T.C. = O(n^2) 
// S.C. = O(1)
class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int result = 0;

        for (int i = 0; i < n; ++i) {
            int count = 0;

            for (int j = i; j < n; ++j) {
                count += (nums[j] == target ? 1 : -1);

                if (count > 0) {
                    result++;
                }

            }
        }

        return result;
    }
};


// Approach 2 ----------------------------------------------------------------------->
// T.C. = O(n^2) 
// S.C. = O(1)
class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        
        int result = 0;
        for(int i =0;i<n;i++){
           int count = 0;
           for(int j = i;j<n;j++){
            count += (nums[j] == target) ? 1 : 0;
            
            if(count > (j-i+1)/2){
                result++;
            }
           }
        }

        return result;
    }
};



// Approach 1 ----------------------------------------------------------------------->
// T.C. = O(n^3) 
// S.C. = O(1)
// Time Limit Exceeded -------------------------------------->
class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        
        int result = 0;
        for(int i =0;i<n;i++){
           for(int j = i;j<n;j++){
            int count = 0;
            for(int k = i;k<=j;k++){
                if(nums[k] == target){
                    count++;
                }
            }

            if(count > (j-i+1)/2){
                result++;
            }
           }
        }

        return result;
    }
};
