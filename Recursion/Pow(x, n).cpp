class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;

        if (N < 0) {   
            x = 1/x;
            N = -1 * N;        
        }
        if(N == 0){
            return 1;
        }
        double half = myPow(x , N/2);
        
        if (N % 2 == 0){
            return half * half;
        }
        else{
            return half * half * x;
        }
    }
};

// T.C = S.C. = O(N)
