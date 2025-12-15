class Solution {
  public:
    bool solve(int index,vector<int> & arr,int k){
        if(k == 0){
            return true;
        }
        if(index == arr.size() || k < 0){
            return false;
        }
        
        // Take Current Element ----------------->
        if(solve(index + 1, arr,k-arr[index])){
            return true;
        }
        
        // Not take Current Element ----------------->
        return solve(index + 1,arr,k);
    }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
       return solve(0,arr,k);
    }
};
// Time Complexity: O(2^n)
// Space Complexity: O(n) (recursion stack)
