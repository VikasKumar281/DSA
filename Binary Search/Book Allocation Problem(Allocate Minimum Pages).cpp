class Solution {
  public:
    bool allocationPossible(int barrier, vector<int> &arr, int k){
        int allocatedStudents = 1, pages = 0;
        
        for(int i =0;i< arr.size();i++){
            if(arr[i] > barrier){
                return false;
            }
            if(pages + arr[i] > barrier){
                allocatedStudents++;
                pages = arr[i];
            }
            else{
                pages += arr[i];
            }
        }
        
        if(allocatedStudents > k){
            return false;
        }
        
        return true;
    }
    int findPages(vector<int> &arr, int k) {
       int n = arr.size();
       
       if(k > n){
           return -1;
       }

       int low = *max_element(arr.begin(), arr.end()); // Gives Maximum element of arr.
       int high = accumulate(arr.begin(), arr.end(), 0); // Gives Total Sum of elements of arr.
       
       int res = -1;
       
       while(low <= high){
           int mid = low + (high - low)/2;
           
           if(allocationPossible(mid, arr, k)){
               res = mid;
               high = mid-1;
           }
           else{
               low = mid + 1;
           }
       }
       
       return res;
    }
};





class Solution {
  public:
    bool isAllocationPossible(vector<int> &arr, int student , int pages){
        int n = arr.size();
        int stu = 1;
        int sum =0;
        for(int i =0;i<n;i++){
            if(arr[i] > pages){
                return false;
            }
            if(sum + arr[i] <= pages){
                sum += arr[i];
            }
            else{
                stu++;
                sum = arr[i];
            }
        }
        
        if(stu <= student){
            return true;
        }
        
        return false;
    } 
    int findPages(vector<int> &arr, int k) {
        if(k > arr.size()){
            return -1;
        }
        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(),arr.end(),0);
        
        int res = 0;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(isAllocationPossible(arr, k,mid)){
                res = mid;
                high = mid - 1; 
            }
            else{
                low = mid + 1;
            }
        }
        
        return res;
    }
};
