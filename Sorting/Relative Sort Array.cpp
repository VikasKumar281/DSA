class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;
        res.reserve(arr1.size());

        unordered_map<int,int> mp; 
        for(int it: arr1){
          mp[it]++;
        }
        
        for(int x: arr2){
            while(mp[x] > 0){
                res.push_back(x);
                mp[x]--;
            }
        }
        
        vector<int> rem;
        for(auto &x:mp){
            while(x.second > 0){
                rem.push_back(x.first);
                x.second--;
            }
        }

        sort(rem.begin(),rem.end());

        for(int x: rem){
            res.push_back(x);
        }
       
       return res;
    }
};
// Time Complexity - O(n+klogk)
// Worst case T.C. (when all elements are remaining): O(nlogn)
// Space Complexity - O(n)
	​
