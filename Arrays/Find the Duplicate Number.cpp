class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int rept;

        unordered_map<int,int> freq;

        for(auto &i: nums){
            if(freq.count(i)){
                rept = i;
            }
            freq[i]++;
        }

        return rept;
    }
};




class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int rept;

        sort(nums.begin(),nums.end());

        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                rept = nums[i];
                break;
            }
        }

        return rept;
    }
};
