class Solution {
  public:
    void solve(vector<int> &arr,int n , int left , int right){
        if(left > right){
            return;
        }
        
        swap(arr[left],arr[right]);
        solve(arr,n,left+1,right-1);
    }
    void reverseArray(vector<int> &arr) {
        int n = arr.size();
        int left = 0;
        int right = n-1;
       solve(arr,n,left,right); 
    }
};
