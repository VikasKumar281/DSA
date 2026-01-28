class Solution {
  public:
    void Recursive(vector<int>& arr, int n) {
        if(n <= 1){
          return;
        }
      
        Recursive(arr, n - 1);

        int k = arr[n - 1];
        int j = n - 2;

        while(j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
    }

    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        Recursive(arr, n);
    }
};
