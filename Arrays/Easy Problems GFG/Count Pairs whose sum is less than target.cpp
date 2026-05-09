// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {

        sort(arr.begin(), arr.end());

        int left = 0;
        int right = arr.size() - 1;

        int count = 0;

        while(left<right){
            int sum = arr[left] + arr[right];

            if(sum < target){

                count += (right - left);
                left++;
            }
            else {
                right--;
            }
        }

        return count;
    }
};
