class Solution {
  public:
  
    bool isPalindrome(int num) {
        int original = num;
        int rev = 0;
        
        while (num > 0) {
            rev = rev * 10 + (num % 10);
            num /= 10;
        }
        
        return original == rev;
    }
  
    vector<int> printPalindromes(int m, int n) {
        vector<int> ans;
        
        for (int i = m; i <= n; i++) {
            if (isPalindrome(i)) {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};
