class Solution {

  public:
    // Function to get the index of an element in a sorted array.
    int getIndexInSortedArray(vector<int>& arr, int k) {
      int x = arr[k];
      int smaller = 0, eq_before = 0;

      for(int i = 0;i <arr.size();i++){
        if(arr[i] <x){
            smaller++;
        }
        else if(arr[i] == x && i< k){
            eq_before++;
        }
      }

    return smaller + eq_before;
    }
};
