class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        int rept = -1, mis = -1;

        vector<int> freq(n + 1, 0);

        for(int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }

        for(int i = 1; i <= n; i++) {
            if(freq[i] == 0) {
                mis = i;
            }
            else if(freq[i] == 2) {
                rept = i;
            }
        }

        return {rept, mis};
    }
};



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
