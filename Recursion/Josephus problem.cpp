class Solution {
  public:
    int solve(int n, int k){
        if(n == 1){
            return 0;
        }
        
        return (solve(n-1,k) + k) % n;
    }
    int josephus(int n, int k) {
        int result = solve(n, k) + 1;
        return result;
    }
};

// It is similar to the problem of Leetcode => https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/
