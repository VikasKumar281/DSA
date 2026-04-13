class Solution {
  public:
    int shortestUnorderedSubarray(vector<int>& arr) {
        int n = arr.size();
        if(n < 3){
            return 0;
        }

        for(int i = 1; i < n - 1; i++){
            if(!((arr[i-1] < arr[i] && arr[i] < arr[i+1])||
                 (arr[i-1] > arr[i] && arr[i] > arr[i+1]))){
                return 3;
            }
        }
        return 0;
    }
};
