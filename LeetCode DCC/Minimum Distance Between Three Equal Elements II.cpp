class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;

        int mini = INT_MAX;

        for(int k = 0;k<n;k++){
            mp[nums[k]].push_back(k);

            if(mp[nums[k]].size() >= 3){
                //i,j,k ---->
                vector<int> &arr = mp[nums[k]];
                int size = arr.size();

                int i = arr[size-3];

                mini = min(mini, (k-i));
            }
        }

        
        return (mini == INT_MAX ? -1 : 2*mini);
    }
};
