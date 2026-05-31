class Solution {
  public:
    int countDigitK(int k, vector<int>& arr) {
        int count = 0;

        for (int num : arr) {
            while (num > 0) {
                if (num % 10 == k)
                    count++;
                num /= 10;
            }
        }

        return count;
    }
};
