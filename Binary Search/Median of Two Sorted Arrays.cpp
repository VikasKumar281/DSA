class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        
        int j=0;
        while(j<m){
           nums1.push_back(nums2[j]);
           j++;
        }
        
        sort(nums1.begin(),nums1.end());
        int total = nums1.size();

        if(total % 2 == 1){
            return nums1[total/2];
        }

        return (nums1[total/2 - 1] + nums1[total/2]) / 2.0;
    }
};
// Time: O((n+m)log(n+m))
// Space: O(1)





class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int n = nums1.size();
        int m = nums2.size();
        
        int i =0,j=0;
        while(i<n && j<m){
            if(nums1[i] <= nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }
            else{
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            temp.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            temp.push_back(nums2[j]);
            j++;
        }

        int total = n+m;

        if(total % 2 == 1){
            return temp[total/2];
        }
        
        return (temp[total/2 - 1] + temp[total/2]) / 2.0;


    }
};
// Time: O((n+m)
// Space: O(n+m)
