class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        int n = arr.size();
        
        unordered_map<int,int> freq;
        
        for(int i : arr){
            freq[i]++;
        }
        
        int maxi = 0;
        int ans = 0;
        for(auto it : freq){
            if(maxi < it.second){
                maxi = it.second;
                ans = it.first;
            }
            else if(it.second == maxi){
                 ans = max(ans, it.first);
            }
        }
        
        return ans;
    }
};
