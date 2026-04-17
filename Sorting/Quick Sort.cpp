//Approach - Using Quick Sort , sort the array
// T.C. = O(N logN) => (Best Case & Average Case)
// T.C. = O(N^2) => (Worst Case)

// S.C. ====================>
// Average : O(log N) (Recursion Stack used)
// Worst : O(N)
// Extra space : O(1)

class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
       if(low >= high){
           return;
       }
       
       int pivotIndex = partition(arr, low, high);
       
       //Left Part --------------------------------->
       quickSort(arr, low, pivotIndex-1);
       
       //Right Part ---------------------------------> 
       quickSort(arr, pivotIndex+1, high);
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        int pivot = arr[high];
        int pivotIndex = low;
        
        for(int i=low;i<high;i++){
            if(arr[i] <= pivot){
                swap(arr[i], arr[pivotIndex]);
                pivotIndex++;
            }
        }
        
        swap(arr[pivotIndex], arr[high]);
        
        return pivotIndex;
    }
};
