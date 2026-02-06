class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();

        sort(nums.begin(),nums.end());
        
        int Length = 1;
        int maxi = nums[0];
        int mini = nums[0];

        int i =0,j=0;
        while(j<n){
            mini = nums[i];
            maxi = nums[j];
            
            while(i < j && maxi > (long long)k * mini){
                i++;
                mini = nums[i];
            }
            
            Length = max(Length , j-i+1);
            j++;
        }

        int minimumRemovals = n - Length;

        return minimumRemovals;
    }
};
