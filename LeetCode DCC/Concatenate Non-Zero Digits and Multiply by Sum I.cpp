class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0;
        long long sum = 0;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                x = digit + x * 10;
                sum += digit;
            }
            n /= 10;
        }

        long long x2 = 0;
        while (x > 0) {
            int digit = x % 10;
            x /= 10;
            x2 = digit + x2 * 10;
        }

        return x2 * sum;
    }
};
