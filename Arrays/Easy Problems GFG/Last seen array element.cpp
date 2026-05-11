class Solution {
  public:
    int lastSeenElement(vector<int>& arr) {
        unordered_map<int, int> mp;

        int n = arr.size();

        for(int i=0;i<n;i++){
            mp[arr[i]]=i;
        }

        int mini=n;
        int ans = -1;

        for(auto it:mp){
            if(it.second<mini){
                mini=it.second;
                ans=it.first;
            }
        }

        return ans;
    }
};
