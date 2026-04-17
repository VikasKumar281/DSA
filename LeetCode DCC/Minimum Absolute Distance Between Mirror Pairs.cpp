class Solution {
public:
    int reverse(int a){
        int reversed = 0;
        while(a > 0){
            reversed = reversed * 10 + a % 10;
            a = a/10;
        }

        return reversed;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        
        int mini = INT_MAX;
        for(int i =0;i<n;i++){
            if(mp.find(nums[i]) != mp.end()){
                mini = min(mini, i - mp[nums[i]]);
            }

            int rev = reverse(nums[i]);
            mp[rev] = i;
        }

        return mini == INT_MAX ? -1 : mini;
    }
};
