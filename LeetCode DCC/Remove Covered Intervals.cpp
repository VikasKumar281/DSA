class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();

        vector<vector<int>> result;

        // CUSTOM COMPARISON --------------------------->
        auto lambda = [](vector<int> &vec1 , vector<int> &vec2){
            if(vec1[0] == vec2[0]){
                return vec1[1] > vec2[1];
            }

            return vec1[0] < vec2[0];
        }; 

        sort(begin(intervals), end(intervals), lambda);

        result.push_back(intervals[0]);
        for(int i = 1;i<n;i++){
            if(result.back()[0] <= intervals[i][0] && result.back()[1] >= intervals[i][1]){
                continue;
            }

            result.push_back(intervals[i]);
        }


        return result.size(); 
    }
};






class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 if (a[0] == b[0])
                     return a[1] > b[1];
                 return a[0] < b[0];
             });

        int ans = 0;
        int maxEnd = 0;

        for (auto &it : intervals) {
            if (it[1] > maxEnd) {
                ans++;
                maxEnd = it[1];
            }
        }

        return ans;
    }
};
