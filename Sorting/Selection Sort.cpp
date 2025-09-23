class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {

        for(int i =0;i<=nums.size()-2;i++){
            int mini = i;
            for(int j=i;j<=nums.size()-1;j++){
                if(nums[j] < nums[mini]){
                    mini = j;
                }
                
            }
            swap(nums[mini],nums[i]);
        }
        return nums;

    }
};
