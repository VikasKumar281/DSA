class Solution {
public:
    int minSetSize(vector<int>& arr) {
      int n = arr.size();
      int mx = 0;

      for(int i =0;i < n;i++){
        mx = max(mx,arr[i]);
      }
      
      vector<int>ans(mx+1, 0);
      for(int i = 0;i<n;i++){
        ans[arr[i]]++;
      }

      // Sorting in Descending Order ------------------>
      sort(ans.begin(),ans.end(), greater<int>());

      int sum =0;
      int count =0;
      
      for(int i=0;i< ans.size();i++){
        if(ans[i] == 0){
            break;
        }
        sum = sum + ans[i];
        count++;
        if(sum >= n/2){
            break;
        }
      }
      
      return count;
    }
};
// Time	O(n log n)
// Space	O(n)
