class Solution {
  public:
    void strangeSort(vector<int>& arr, int k) {
        int n =arr.size();
        k--; 

        int fixed =arr[k];

        swap(arr[k], arr[n-1]);

        sort(arr.begin(), arr.begin()+(n-1));

        for(int i = n-1; i > k; i--){
            arr[i] = arr[i-1];
        }

        arr[k] = fixed;
    }
};
