class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        unordered_set<int> primes = {2,3,5,7,11,13,17,19};

        int result = 0;

        for(int num = left;num<= right;num++){
            int setBits = __builtin_popcount(num);

            if(primes.count(setBits)){
                result++;
            }
        }

        return result;
    }
};




class Solution {
public:
    int countSetBits(int num){
       int count = 0; 
       while(num > 0){
        if(num % 2 == 1){
            count++;
        }
        num = num/2;
       }
       return count;
    }
    
    int countPrimeSetBits(int left, int right) {
        unordered_set<int> primes = {2,3,5,7,11,13,17,19};

        int result = 0;

        for(int num = left;num<= right;num++){
            int setBits = countSetBits(num);

            if(primes.count(setBits)){
                result++;
            }
        }

        return result;
    }
};
