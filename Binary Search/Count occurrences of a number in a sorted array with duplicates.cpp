class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        int first = -1;
        int last = -1;
        
        int low = 0;
        int high = n-1;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid] == target){
                first = mid;
                high = mid - 1;
            }
            
            else if(arr[mid] < target){
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
        
        if(first == -1){
            return 0;
        }
        
        low = 0;
        high = n-1;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid] == target){
                last = mid;
                low = mid + 1;
            }
            
            else if(arr[mid] < target){
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
        
        int ans = last - first + 1;
        
        
        return ans;
    }
};

// Time Complexity: O(log n)
// Space Complexity: O(1)
