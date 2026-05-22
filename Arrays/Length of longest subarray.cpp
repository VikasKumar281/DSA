class Solution {
  public:
    int longestSubarry(vector<int>& arr) {
        int maxi = 0;
        int cnt = 0;

        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= 0){
                cnt++;
                maxi =max(maxi, cnt);
            }
            else{
                cnt = 0;
            }
        }

        return maxi;
    }
};
