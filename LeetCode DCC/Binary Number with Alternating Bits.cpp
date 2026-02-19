class Solution {
public:
    int highestBit(int n){
        return (int)log2(n);
    }
    bool hasAlternatingBits(int n) {
        int highestBitset = highestBit(n);

        bitset<32>b(n);
        for(int i =0;i <= highestBitset;i++){
            if(b[i] == b[i+1]){
                return false;
            }
        }

        return true;
    }
};


class Solution {
public:
    bool hasAlternatingBits(int n) {
       int prev = n % 2;
        n /= 2;
        
        while(n > 0) {
            int curr = n % 2;
            if(curr == prev) return false;
            prev = curr;
            n /= 2;
        }
        
        return true;
    }
};
