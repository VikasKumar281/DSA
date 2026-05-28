class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        int steps = 0;
        int neg = 0;
        int zero = 0;

        for(int i = 0; i < N; i++) {
            if(arr[i] > 0) {
                steps += (arr[i] - 1);
            }
            else if(arr[i] < 0) {
                steps += (-1 - arr[i]);
                neg++;
            }
            else {
                zero++;
                steps += 1;
            }
        }

        if(neg % 2 == 0) {
            return steps;
        }

        if(zero > 0) {
            return steps;
        }

        return steps + 2;
    }
};
