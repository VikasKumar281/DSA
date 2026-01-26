class Solution {
  public:
    string chartostr(char arr[], int n) {
      string ans;
      for(int i =0;i<n;i++){
          ans.push_back(arr[i]);
      }
      
      return ans;
    }
};
