class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        for(int i : nums1){
            for(int j : nums2){
                
                if(i == j){
                    return i;
                }
            }
        }

        return -1;
    }
};
