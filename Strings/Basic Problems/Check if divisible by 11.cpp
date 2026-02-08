class Solution {
  public:
    int divisibleBy11(string s) {
        int rem = 0;
        for (char ch:s){
            rem = (rem*10 +(ch - '0')) % 11;
        }

        return rem == 0;
    }
};
