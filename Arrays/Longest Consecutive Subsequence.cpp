class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        if(n == 0){
          return 0;
        }
        sort(arr.begin(),arr.end());
        
        int count = 1;
        int maxi =1;
        
        for(int i = 1;i<n;i++){
            if(arr[i] == arr[i-1]){
                // skip duplicates ---->
                continue;
            }
            else if(arr[i] == (arr[i-1] + 1)){
                count++;
            }
            else{
                count = 1;
            }
            maxi = max(maxi,count);
        }
        
        return maxi;
    }
};
// Time Complexity  : O(n log n)
// Space Complexity : O(1)   (Auxiliary)




class Solution {
  public:
    void sorting(vector<int> &arr , int n){
        for(int i =0;i<n;i++){
            int minIndex = i;
            for(int j =i+1;j<n;j++){
                if(arr[minIndex] > arr[j]){
                    minIndex = j;
                }
            }
            swap(arr[minIndex], arr[i]);
        }
    }
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        sorting(arr,n);
        
        int count = 1;
        int maxi =1;
        
        for(int i = 1;i<n;i++){
            if(arr[i] == arr[i-1]){
                // skip duplicates ---->
                continue;
            }
            else if(arr[i] == (arr[i-1] + 1)){
                count++;
            }
            else{
                count = 1;
            }
            maxi = max(maxi,count);
        }
        
        return maxi;
    }
};
// Total T.C. = O(n²)
// Space.C. = O(1)
