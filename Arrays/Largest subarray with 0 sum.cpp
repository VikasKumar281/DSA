class Solution {
  public:
    int maxLength(vector<int>& arr) {
       int n = arr.size();
       int maxLen =0;
       long long sum =0;
       unordered_map<long long , int>mp;
       
       for(int i=0;i<n;i++){
           sum += arr[i];
           if(sum == 0){
               maxLen = max(maxLen , i+1);
           }
           
           if(mp.find(sum) != mp.end()){
               maxLen = max(maxLen , i-mp[sum]);
           }
           else{
               mp[sum] = i;
           }
       }
       
       return maxLen;
    }
};
// Complexity =>
// Time => O(n)
// Space => O(n)
