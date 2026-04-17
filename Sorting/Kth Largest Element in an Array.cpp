

// Time Limit Exceeded ---------------------------------------------------------------->
//Approach - Using Quick Sort , sort the array
// T.C. = O(N logN) => (Best Case & Average Case)
// T.C. = O(N^2) => (Worst Case)

// S.C. ====================>
// Average : O(log N) (Recursion Stack used)
// Worst : O(N)
// Extra space : O(1)
class Solution {
public:
    int partition(vector<int> &nums, int low, int high){
        int pivot = nums[high];
        int pivotIdx = low;

        for(int i=low;i< high;i++){
            if(nums[i] <= pivot){
                swap(nums[i], nums[pivotIdx]);
                pivotIdx++;
            }
        }

        swap(nums[pivotIdx], nums[high]);

        return pivotIdx;
    }
    void quickSort(vector<int> &nums, int low, int high){
        if(low >= high){
            return;
        }

        int pivotIdx = partition(nums, low, high);

        quickSort(nums, low, pivotIdx-1);

        quickSort(nums, pivotIdx+1, high);
    }
    int findKthLargest(vector<int>& nums, int k) {
        int low = 0;
        int high = nums.size() - 1;

        quickSort(nums, low, high);

        return nums[high - k + 1];
    }
};
