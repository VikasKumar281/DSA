class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int> mp;
        int maxlen =0;
        int sum =0;
        
        
        for(int i =0;i<n;i++){
            sum += arr[i];
            if(sum == k){
                maxlen = i+1;
            }
            int rem = sum-k;
            if(mp.find(rem) != mp.end()){
                maxlen = max(maxlen , i-mp[rem]);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
            
            
        }
        return maxlen;
    }
    
};
// T.C. = S.C. = O(n)




