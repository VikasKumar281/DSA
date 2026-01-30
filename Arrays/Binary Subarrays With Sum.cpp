class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int sum = 0, count = 0;
        
        for(int x : nums){
            sum += x;
            if(mp.count(sum - goal)){
                count += mp[sum - goal];
            }
            
            mp[sum]++;
        }
        
        return count;
    }
};
// Time complexity = O(n).
// Space complexity = O(n).


// TLE Shows on LeetCode
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int count = 0;
       
        for(int i =0;i<n;i++){
            int sum = 0;
            for(int j =i;j<n;j++){
                sum += nums[j];
                if(sum == goal){
                    count++;
                }
            }
        }
        return count;
    }
};
// Time complexity = O(n²).
// Space complexity = O(1).
