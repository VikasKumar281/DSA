class Solution {
  public:
    int findKRotation(vector<int> &arr) {
       int n = arr.size();
       int start = 0;
       int end = n - 1;
       int mini = INT_MAX;
       
       int index = -1;
       
       while(start <= end){
           int mid = start + (end - start)/2;
           
           if(arr[start] <= arr[end]){
               if(arr[start] < mini){
                 mini = arr[start];
                 index = start;
               }
               break;
           }
           
           else if(arr[start] <= arr[mid]){
               if(arr[start] < mini){
                 mini = arr[start];
                 index = start;
               }
               start = mid+ 1;
           }
           else{
               if(arr[mid] < mini){
                 mini = arr[mid];
                 index = mid;
               }
               end = mid - 1;
           }
       }
       
       return index ;
    }
};

// Time: O(log n) 
// Space: O(1)
