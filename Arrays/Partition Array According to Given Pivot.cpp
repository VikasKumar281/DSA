class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> temp;
        int n = nums.size();

        int countPivot = 0;
        for(int num : nums){
            if(num < pivot){
                temp.push_back(num);
            }
            if(num == pivot){
                countPivot++;
            }
        } 
        
        for(int i =0 ; i < countPivot;i++){
            temp.push_back(pivot);
        }

        for(int num : nums){
            if(num > pivot){
                temp.push_back(num);
            }
        } 
       nums = temp;

       return nums;

    }
};


class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller , greater , equal;
        int n = nums.size();
       
        for(int i = 0;i<n;i++){
            if(nums[i] < pivot){
                smaller.push_back(nums[i]);
            }
        }

        for(int i = 0;i<n;i++){
            if(nums[i] == pivot){
                equal.push_back(nums[i]);
            }
        }

        for(int i = 0;i<n;i++){
            if(nums[i] > pivot){
                greater.push_back(nums[i]);
            }
        }

        int idx =0;
        for(int i : smaller){
            nums[idx++] = i;
        }
        for(int i : equal){
            nums[idx++] = i;
        }
        for(int i : greater){
            nums[idx++] = i;
        }

       return nums;

    }
};
