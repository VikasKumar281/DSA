class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0){
            return 1;
        }

        int result = 0;
        int counter = 0;

        while(n){
            int rem = n % 2;
            result = result + pow(2, counter) * !rem;
            counter++;
            n = n / 2;
        }

        return result;
    }
};
