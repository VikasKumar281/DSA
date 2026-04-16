
//Time Complexity => O(N^2) -------------------------------->
// Time Limit Exceeded --------------------------------->
class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int m = nums.size();
        int n = queries.size();

        vector<int> arr;

        for(int j = 0; j < n; j++) {
            int minDist = INT_MAX;
            int target = nums[queries[j]];

            for(int i = 0; i < m; i++) {
                if(i == queries[j]){
                    continue;
                }

                if(target == nums[i]) {
                    int straightDist = abs(i - queries[j]);
                    int circularDist = m - straightDist;

                    minDist = min({minDist, straightDist, circularDist});
                }
            }

            if(minDist == INT_MAX) {
                arr.push_back(-1);
            } else {
                arr.push_back(minDist);
            }
        }

        return arr;
    }
};
