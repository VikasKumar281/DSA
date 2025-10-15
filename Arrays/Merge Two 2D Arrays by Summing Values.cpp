class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        map<int , int>mp;

        for(auto &it: nums1){
            mp[it[0]] += it[1];
        }

        for(auto &it: nums2){
            mp[it[0]] = mp[it[0]] + it[1];
        }

        for(auto &it: mp){
            ans.push_back({it.first , it.second});
        }
        
        return ans;
    }
};

// T.C = S.C = O(N + M)



class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        vector<vector<int>> ans;
        int i =0,j=0;

        while(i<nums1.size() && j<nums2.size()){    
            if(nums1[i][0] == nums2[j][0]){
              ans.push_back({nums1[i][0] , nums1[i][1] + nums2[j][1]});
              i++;
              j++;
            }
            else if(nums1[i][0] < nums2[j][0]){
              ans.push_back({nums1[i][0] , nums1[i][1] });
              i++;
            }
            else{
              ans.push_back({nums2[j][0] , nums2[j][1] });
              j++;
            }
        }

        while(i<nums1.size()){
           ans.push_back({nums1[i][0] , nums1[i][1] });  
           i++;
        }

        while(j<nums2.size()){
           ans.push_back({nums2[j][0] , nums2[j][1] });  
           j++;
        }
        
        return ans;
    }
};
