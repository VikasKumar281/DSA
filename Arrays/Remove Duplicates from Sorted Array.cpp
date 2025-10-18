class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        set<int> st;
        for(int i = 0;i<n;i++){
            st.insert(nums[i]);
        }
        
        int j = 0;
        int k = st.size();

        for(int i: st){
            nums[j++] = i;
        }
        
        return k;
    }
};






class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int n = nums.size();
     set<int>s;
     for(int i =0;i<n;i++){
        s.insert(nums[i]);
     }

     int index =0;
     int size = s.size();
     vector<int>temp(size);
     for(auto x:s){
        temp[index++] = x;
     }
     nums = temp;
     int ans = temp.size();
     return ans;
     }
};
