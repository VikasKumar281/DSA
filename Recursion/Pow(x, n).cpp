class Solution {
private: 
    double fastPow(double x , int n){
        if(n == 0){
            return 1.0;
        }

        double half = fastPow(x , n/2);

        if(n % 2 == 0){
            return half * half;
        }

      return half * half * x;  

    }    
public:
    double myPow(double x, int n) { 
        long long N = n;

        if(N < 0){
           return 1.0 / fastPow(x, -N);
        } 

        return fastPow(x,N);

    }
};




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
