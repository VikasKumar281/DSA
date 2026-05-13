class Solution {
  public:
    int countPairs(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        
        int n = arr.size();
        int left =0;
        int ans=0;
        
        for(int right = 0; right < n; right++){
            while(arr[right]-arr[left]>=k){
                left++;
            }
            ans+=(right - left);
        }
        return ans;
    }
};
