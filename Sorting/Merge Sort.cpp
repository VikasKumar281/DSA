//T.C. = O(N logN) --------------------------------------------->
//S.C. = O(N)
class Solution {
  public:
    void merge(vector<int> &arr,int l , int mid, int r){
        int m = mid - l + 1;
        // (r-1) - (mid+1) => r - m
        int n = r - mid;
        
        vector<int> left(m), right(n);
        
        int k = l;
        
        for(int i =0;i<m;i++){
            left[i] = arr[k];
            k++;
        }
        
        for(int j =0;j<n;j++){
            right[j] = arr[k];
            k++;
        }
        
        // Merge Both Arrays -------------------->
        int i = 0, j = 0;
        k = l;
        
        while(i < m && j < n){
            if(left[i] <= right[j]){
                arr[k] = left[i];
                i++;
            }
            else{
                arr[k] = right[j];
                j++;
            }
            k++;
        }
        
        while(i < m){
            arr[k] = left[i];
            i++;
            k++;
        }
        
        while(j < n){
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    void solve(vector<int> &arr, int l,int r){
        if(l >= r){
            return;
        }
        int mid = l + (r - l)/2;
        
        solve(arr, l, mid);
        solve(arr, mid+1, r);
        
        merge(arr, l, mid, r);
    }
    void mergeSort(vector<int>& arr, int l, int r){
        solve(arr, l, r);
    }
};




class Solution {
  public:
    void merge(vector<int> &arr , int low ,int mid, int high){
       vector<int> temp;
       int left = low;
       int right = mid+1;
       
       while(left <= mid && right <= high){
           if(arr[left] <= arr[right]){
               temp.push_back(arr[left]);
               left++;
           }
           else{
               temp.push_back(arr[right]);
               right++;
           }
       }
       
       while(left<= mid){
           temp.push_back(arr[left]);
           left++;
       }
       
       while(right <= high){
           temp.push_back(arr[right]);
           right++;
       }
       
       for(int i = low;i<= high;i++){
           arr[i] = temp[i-low];
       }
        
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l >= r){
            return;
        }
        int mid = (l+r)/2;
        
        mergeSort(arr, l , mid);
        
        mergeSort(arr, mid+1 , r);
        
        merge(arr,l , mid , r);
    }
};
