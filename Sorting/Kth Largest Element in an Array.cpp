//Approach - Used QuickSelect Algorithm
// Time Complexity =>
//    - Best Case: O(N)
// Jab pivot perfect split kare (array roughly half-half divide ho)
//    - Average Case: O(N)
//    - Worst Case: O(N²)
// Jab pivot hamesha smallest ya largest nikle
// (example: already sorted array + bad pivot choice)

// Space Complexity =>
// Iterative version : O(1) 
class Solution {
public:
    int partition(vector<int> &nums, int left, int right){
        int pivot = nums[left];
        int i = left + 1;
        int j = right;

        while(i <= j){
            if(nums[i] < pivot && nums[j] > pivot){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }

            if(nums[i] >= pivot){
                i++;
            }

            if(nums[j] <= pivot){
                j--;
            }
        } 

        swap(nums[left], nums[j]);

        return j;
    }
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();

        int left = 0;
        int right = n-1;

        int pivotIdx = 0;

        //Kth Largest Pivot Element => nums[k-1] (Jab Descending Order me partition hoga) -------->

        while(true){
            pivotIdx = partition(nums, left, right);

            if(pivotIdx == k-1){
                break;
            }
            else if(pivotIdx > k-1){
                right = pivotIdx - 1;
            }
            else{
                left = pivotIdx + 1;
            }
        } 

        return nums[pivotIdx];
    }
};

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
