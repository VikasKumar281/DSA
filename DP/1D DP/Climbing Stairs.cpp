// Tabulation method -------------------------->
class Solution {
public:
    int solve(int n){
        if(n<=1){
            return 1;
        }

        int prev2 = 1;
        int prev = 1;
        int curr;

        for(int i = 2;i<=n;i++){
            curr = prev2 + prev;
            prev2 = prev;
            prev = curr;
        }
      return prev;
    }
    int climbStairs(int n) {
       return solve(n); 
    }
};
