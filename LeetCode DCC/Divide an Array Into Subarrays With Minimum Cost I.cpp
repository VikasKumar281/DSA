class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int first = nums[0];
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;

        for(int i =1;i<nums.size();i++){
            if(nums[i] < firstMin){
                secondMin = firstMin;
                firstMin = nums[i];
            }
            else if(nums[i] < secondMin){
                secondMin = nums[i];
            }
        }

        
        return first + firstMin + secondMin;
    }
};
// Time: O(n)
// Space: O(1)



class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int first = nums[0];
        vector<int> rest;

        for(int i =1;i<nums.size();i++){
            rest.push_back(nums[i]);
        }

        sort(rest.begin(),rest.end());

        return first + rest[0] + rest[1];
    }
};

// Time: O(n log n)
// Space: O(n)
