class Solution {
public:
    typedef long long ll;
    long long countCommas(long long n) {
        ll commas = 0;
        ll threshold = 1000;

        while(threshold <= n){
            commas += n - threshold + 1;
            threshold *= 1000;
        }

        return commas;
    }
};
// Time complexity:O(logN)
// Space complexity:O(1)
