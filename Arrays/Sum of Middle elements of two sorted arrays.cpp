class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        int n = arr1.size();
        int i = 0, j = 0;
        int count = 0;
        int mid1 = -1, mid2 = -1;

        while(count <= n) {
            int val;
            if(i < n && (j >= n || arr1[i] <= arr2[j])) {
                val = arr1[i];
                i++;
            } 
            else{
                val = arr2[j];
                j++;
            }

            if(count == n - 1) mid1 = val;
            if(count == n) {
                mid2 = val;
                break;
            }
            count++;
        }

        return mid1 + mid2;
    }
};
