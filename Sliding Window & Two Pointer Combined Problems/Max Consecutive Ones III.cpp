// OPTIMAL APPROACH ---------------------------------------------------------------------->
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen = 0;
        
        int zeroes = 0;
        int left = 0, right = 0;
        
        while(right < nums.size()){
           if(nums[right] == 0){
             zeroes++;
           }
           if(zeroes > k){
            if(nums[left] == 0){
                zeroes--;
            }
            left++;
           }
           if(zeroes <= k){
            maxLen = max(maxLen, right - left + 1);
           }
           right++;
        }

        return maxLen;
    }
};
// T.C. = O(N)
// S.C. = O(1)




class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen = 0;
        
        int zeroes = 0;
        int left = 0, right = 0;
        
        while(right < nums.size()){
           if(nums[right] == 0){
             zeroes++;
           }
           while(zeroes > k){
            if(nums[left] == 0){
                zeroes--;
            }
            left++;
           }
           if(zeroes <= k){
            maxLen = max(maxLen, right - left + 1);
           }
           right++;
        }

        return maxLen;
    }
};
// T.C. = O(2*N) ~ O(N)
// S.C. = O(1)



// This Method Gives TLE ------------------------------------------------------------------------------->
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen = 0;

        for(int i =0;i<n;i++){
            int zeroes = 0;
            for(int j = i;j<n;j++){
                if(nums[j] == 0){
                    zeroes++;
                }
                if(zeroes <= k){ 
                   maxLen = max(maxLen , j - i + 1);
                }
                else{
                   break;
                }
            }
        }

        return maxLen;
    }
};
// T.C. = O(N^2)
// S.C. = O(1)
