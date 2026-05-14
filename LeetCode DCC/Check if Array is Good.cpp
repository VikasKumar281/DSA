class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxEl = *max_element(begin(nums), end(nums));

        if(nums.size() != maxEl+1){
            return false;
        }

        vector<int>count(maxEl+1, 0);

        for(int i = 0; i <nums.size(); i++){
            count[nums[i]]++;

            if(nums[i] != maxEl && count[nums[i]] > 1){}
                return false;
            }

            else if(nums[i] == maxEl && count[nums[i]]>2){
                return false;
            }
        }

        return true;
    }
};
