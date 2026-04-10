class Solution {
public:
    int minimumDistance(vector<int>& nums){
        int n = nums.size();
        unordered_map<int,int> freq;

        for(int x : nums){
            freq[x]++;
        }

        int ans = INT_MAX;

        for(auto &it : freq){
            if(it.second >= 3){
                int num = it.first;

                vector<int> arr;
                for(int i = 0; i < n; i++){
                    if(nums[i] == num){
                        arr.push_back(i);
                    }
                }

                // consecutive 3 pick karo -------------->
                for(int i = 0; i + 2 < arr.size(); i++){
                    int dist = 2 * (arr[i+2] - arr[i]);
                    ans = min(ans, dist);
                }
            }
        }

        return (ans == INT_MAX ? -1 : ans);
    }
};
