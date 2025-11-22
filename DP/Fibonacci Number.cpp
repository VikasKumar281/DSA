// TABULATION METHOD -------------------------------->
class Solution { 
public:
    int solve(int n){
      if(n <= 1) return n;  
      int prev2 = 0;
      int prev = 1;
      int curr;

      for(int i =2;i<=n;i++){
        curr = prev2 + prev;
        prev2 = prev;
        prev = curr;
      }
    
      return prev;
    }
    int fib(int n) {
      return solve(n);
    }
};


// MEMOIZATION METHOD -------------------------------------->
class Solution { 
public:
    int solve(vector<int> &dp,int n){
      if(n<=1){
        return n;
      }
      if(dp[n] != -1){
        return dp[n];
      }  
      return dp[n] = fib(n-1)+fib(n-2);
    }
    int fib(int n) {
     vector<int>dp(n+1,-1);
      return solve(dp,n);
    }
};
