class Solution {
  public:
    bool solve(string &s,int n , int left , int right){
        if(left >=right){
            return true; 
        }
        
        if(s[left] != s[right]){
            return false;
        }
        
        return solve(s,n,left+1,right-1);
    }
    bool isPalindrome(string& s) {
        int n = s.size();
        int left =0;
        int right = n-1;
        
        return solve(s,n,left,right);
    }
};
