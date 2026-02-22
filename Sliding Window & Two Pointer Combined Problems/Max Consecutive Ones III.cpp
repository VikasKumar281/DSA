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
