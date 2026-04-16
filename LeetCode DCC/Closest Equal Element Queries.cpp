//Approach - Store in map and use binary search to find indices
//T.C : O(Q * log(n))
//S.C : O(n)
class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();

        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        
        vector<int> result;

        for(int qi: queries){ //O(Q)
            int elem = nums[qi];
            vector<int> &vec = mp[elem];

            int size = vec.size();
            
            // No more occurence of this element --------------->
            if(size == 1){
                result.push_back(-1);
                continue;
            }
            
            int pos = lower_bound(begin(vec), end(vec), qi) - begin(vec); //O(log(n))
            int res = INT_MAX;

            //Right Neighbour => (pos + 1) ----------->
            int right = vec[(pos + 1) % size];
            int straightDist = abs(qi - right);
            int circularDist = n - straightDist;
            
            res = min({res, straightDist, circularDist}); 


            //Left Neighbour => (pos - 1) ----------->
            int left = vec[(pos - 1 + size) % size];
            straightDist = abs(qi - left);
            circularDist = n - straightDist;
            
            res = min({res, straightDist, circularDist}); 

            result.push_back(res);
        }

        return result;
    }
};



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
