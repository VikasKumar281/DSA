class Solution {
public:
    void solve(int start ,int k , int n, vector<int> &res,vector<vector<int>>& ans){
      if(k == 0 && n == 0){
        ans.push_back(res);
        return;
      }
      if(k == 0 || n < 0){
        return;
      }
      
      for(int i = start;i <= 9;i++){
        res.push_back(i);
        solve(i+1,k-1,n-i,res,ans);
        res.pop_back();
      }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> res;
        vector<vector<int>> ans;
        solve(1,k,n,res,ans);
        return ans;
    }
};
