class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        int dup = -1, miss = -1;

        for (int i = 0; i < n; i++) {
            int x = abs(arr[i]);
            if (arr[x - 1] < 0)
                dup = x;
            else
                arr[x - 1] = -arr[x - 1];
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] > 0)
                miss = i + 1;
        }

        return {dup, miss};
    }
};
