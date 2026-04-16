// Approach => Used Merge Sort Algorithm to sort the Array ----------------------------------------->
//T.C. => O(N logN)
//S.C. => O(N)
class Solution {
public:
    void merge(vector<int> &nums, int l , int mid , int r){
        int m = mid - l + 1;
        int n = r - mid;

        vector<int> left(m), right(n);

        int k = l;
        for(int i =0;i<m;i++){
            left[i] = nums[k];
            k++;
        }

        for(int i =0;i<n;i++){
            right[i] = nums[k];
            k++;
        }

        // Merge Both Arrays --------------------------->
        int i = 0, j = 0;
        k = l;

        while(i<m && j<n){
            if(left[i] <= right[j]){
                nums[k] = left[i];
                i++;
            }
            else{
                nums[k] = right[j];
                j++;
            }
            k++;
        }  

        while(i < m){
            nums[k] = left[i];
            i++;
            k++;
        }

        while(j < n){
            nums[k] = right[j];
            j++;
            k++;
        }

    }
    void mergeSort(vector<int> &nums, int l, int r){
        if(l >= r){
            return;
        }

        int mid = l + (r - l)/2;

        // Left Part ---->
        mergeSort(nums, l, mid);

        // right part --->
        mergeSort(nums, mid+1, r);


        merge(nums, l, mid, r);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        
        mergeSort(nums, l , r);
        
        return nums;
    }
};
