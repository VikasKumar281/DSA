class Solution {
  private:
    void sortArray(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    } 
  public:
    vector<int> findElements(vector<int> arr) {
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        vector<int> result;
        for(int i =0;i<n-2;i++){
            result.push_back(arr[i]);
        }
        
        return result;
    }
};
