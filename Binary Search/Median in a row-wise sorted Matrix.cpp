class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        vector<int> ans;
        int m = mat.size();
        int n = mat[0].size();
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                ans.push_back(mat[i][j]);
            }
        }
        
        sort(ans.begin(),ans.end());
        
        int mid =(m * n)/2;
        
        return ans[mid];
    }
};
// Time: O((m*n) log(m*n))
// Space: O(m*n)
