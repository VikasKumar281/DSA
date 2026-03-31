class Solution {
public:
    int countCommas(int n) {
        if(n < 1000){
            return 0;
        }
        return (n - 999);
    }
};


class Solution {
public:
    int countCommas(int n) {
        if(n < 1000){
            return 0;
        }
        return (n - 1000 + 1);
    }
};
