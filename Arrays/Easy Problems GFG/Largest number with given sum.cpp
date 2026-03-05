class Solution {
  public:
    string largestNumber(int n, int sum) {
        if(sum > 9* n){
            return "-1";
        }
        string ans = "";
        
        for(int i = 0; i < n; i++) {
            int digit = min(9, sum);
            ans += (digit + '0');
            sum -= digit;
        }
        
        if(sum>0){
            return "-1";
        }
        return ans;
    }
};
