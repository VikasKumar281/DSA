class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {

        int i = 0, j = arr.size() - 1;
        int count = 0;

        while(i < j){
            if(arr[i] % 2 == 0){
                i++;
                count++;
            }
            else if(arr[j] % 2 == 1){
                j--;
            }
            else{
                swap(arr[i], arr[j]);
                count++;
                i++;
                j--;
            }
        }

       
        if(i == j && arr[i] % 2 == 0)
            count++;

        sort(arr.begin(), arr.begin() + count);  
        sort(arr.begin() + count, arr.end());  
    }
};
