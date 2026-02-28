class Solution {
public:
    int concatenatedBinary(int n) {
        const int mod = 1e9 + 7;
        long long result = 0;
        int bitLength = 0;

        for(int i = 1;i <= n; i++) {
            if((i &(i -1))==0){
                bitLength++;
            }
            result =((result <<bitLength)+i) %mod;
        }

        return result;
    }
};
