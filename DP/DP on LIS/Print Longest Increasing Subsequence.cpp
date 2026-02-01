// TABULATION METHOD -------------------------------------------------------------------------------------->
class Solution {
  public:
    vector<int> getLIS(vector<int>& arr) {
       int n = arr.size();
       vector<int> dp(n,1),hash(n);
       
       int maxi = 1;
       int lastIndex = 0;
       
       for(int index =0;index < n;index++){
           hash[index] = index;
           for(int prev =0; prev < index; prev++){
               if(arr[prev] < arr[index] && 1 + dp[prev] > dp[index]){
                   dp[index] = 1 + dp[prev];
                   hash[index] = prev;
               }
           }
           
           if( dp[index] > maxi){
               maxi = dp[index];
               lastIndex = index;
           }
       }
       
       vector<int> temp;
       temp.push_back(arr[lastIndex]);
       
       while(hash[lastIndex] != lastIndex){
           lastIndex = hash[lastIndex];
           temp.push_back(arr[lastIndex]);
       }
       
       reverse(temp.begin(),temp.end());
    //   return maxi;
       
       return temp;
    }
};
// Total Time => O(n²)
// Space => O(n)
