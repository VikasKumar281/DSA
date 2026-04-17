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
