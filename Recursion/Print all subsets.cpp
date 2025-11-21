class Solution {
  public:
    void solve(vector<int> & arr,vector<int> &temp, vector<vector<int>> &ans , int index){
        ans.push_back(temp);
        
        for(int i = index;i<arr.size();i++){
            temp.push_back(arr[i]);
            solve(arr,temp,ans,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(arr,temp, ans,0);
        return ans;
    }
};
