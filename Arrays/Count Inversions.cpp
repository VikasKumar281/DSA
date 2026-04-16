class Solution {
public:
    int merge(vector<int> &arr,int l , int mid, int r){
        int m = mid - l + 1;
        // (r-1) - (mid+1) => r - m
        int n = r - mid;
        
        int cnt = 0;
        
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
                // right is smaller
                arr[k] = right[j];
                cnt += (m - i);
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
        
        return cnt;
    }
    int mergeSort(vector<int> &arr, int l, int r){
        int cnt = 0;
        if(l >= r){
            return cnt;
        }
        
        int mid = l + (r - l)/2;
        
        cnt += mergeSort(arr, l , mid);
        cnt += mergeSort(arr, mid+1, r);
        
        cnt += merge(arr, l , mid, r);
        
        return cnt;
    }
    int inversionCount(vector<int> &arr) {
        int n = arr.size();
        int l = 0;
        int r = n -1;
        
        return mergeSort(arr, l, r);
    }
};
 // T.C. => O(N logN)
 // S.C. => O(N)




//TLE -------------------------------> T.C. => O(N^2)
class Solution {
public:
    int inversionCount(vector<int> &arr) {
        int n = arr.size();
        int count = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] > arr[j]) {
                    count++;
                }
            }
        }

        return count;
    }
};
