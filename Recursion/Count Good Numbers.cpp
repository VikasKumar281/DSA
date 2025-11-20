class Solution {
public:
    const long long M = 1e9 + 7;
    long long findPow(long long a,long long b){
        if(b == 0){
            return 1;
        }

        long long half = findPow(a , b/2);
        long long result = (half * half) % M;
        if(b % 2 == 1){
            result = (result * a) % M;
        }

        return result;
    }    
    int countGoodNumbers(long long n) {
        return (long long)findPow(5,(n+1)/2) * findPow(4,n/2) % M;
    }
};
