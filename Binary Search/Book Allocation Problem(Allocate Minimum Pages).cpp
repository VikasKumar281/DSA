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
