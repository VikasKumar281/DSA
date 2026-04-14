class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
        
        int maxVal = 100000;
        vector<int> freq(maxVal + 1, 0);
        
        for(int i = 0;i <n;i++) {
            freq[b[i]]++;
        }
        
        for(int i = 1; i <= maxVal; i++){
            freq[i] += freq[i - 1];
        }
        
        vector<int> ans;
        for(int i = 0; i < q; i++){
            int idx =query[i];
            int val=a[idx];
            ans.push_back(freq[val]);
        }
        
        return ans;
    }
};
