class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int freq = n / 3;

        unordered_map<int,int> mp;
        set<int> st;
        for(int i: nums){
            mp[i]++;
        }
            
        for(int i =0;i<n;i++){
            if(mp[nums[i]] > freq){
                st.insert(nums[i]);
            }
        }

        for(int i :st){
            ans.push_back(i);
        }

        return ans;
    }
};
