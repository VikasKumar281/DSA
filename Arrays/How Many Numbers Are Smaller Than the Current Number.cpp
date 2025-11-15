class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>arr;
        int n= nums.size();
        arr.reserve(n);

        int count = 0;

        int i =0;
        while(i<n){
          for(int j =0;j<n;j++){
             if( i!=j && nums[i] > nums[j]){
               count++;
              }
            }
            arr.push_back(count);
            i++;
            count = 0;
        }

       return arr;
    }
};
