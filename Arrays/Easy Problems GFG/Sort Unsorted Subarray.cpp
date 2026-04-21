// User function template for C++
class Solution {
  public:
    vector<int> printUnsorted(vector<int>& arr) {
        int n = arr.size();
        
        int s =-1,e=-1;
        
        for(int i =0;i<n - 1;i++){
            if(arr[i] >arr[i+ 1]){
                s =i;
                break;
            }
        }
        
        if(s ==-1){
            return {0, 0};
        }
        
        for (int i = n-1;i >0;i--){
            if (arr[i]<arr[i -1]){
                e =i;
                break;
            }
        }
        
        int mini =INT_MAX,maxi = INT_MIN;
        for(int i = s;i<= e; i++) {
            mini =min(mini, arr[i]);
            maxi= max(maxi, arr[i]);
        }
        
        for(int i =0;i < s;i++){
            if(arr[i] > mini){
                s = i;
                break;
            }
        }
        
        for(int i = n -1; i >e;i--){
            if(arr[i] <maxi){
                e =i;
                break;
            }
        }
        
        return {s, e};
    }
};
