class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> v;
        for(int i =0;i<n;i++){
            v.push_back(nums1[i]);
        }
        for(int i =0;i<m;i++){
            v.push_back(nums2[i]);
        }

        sort(v.begin(),v.end());
        
        int a = v.size();

        if (a % 2 == 0) {
            return (v[a/2 - 1] + v[a/2]) / 2.0;
        } else {
            return v[a/2];
        }

    }
};
// Time: O((n+m) log(n+m))
// Space: O(n+m)
