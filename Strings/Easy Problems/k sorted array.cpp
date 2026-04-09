class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k) {
        
        vector<int> v(arr, arr + n);
        sort(v.begin(), v.end());
        
        unordered_map<int, int> pos;
        
        for(int i = 0; i < n; i++){
            pos[v[i]] = i;
        }
        
        for(int i = 0; i < n; i++){
            if(abs(i - pos[arr[i]]) > k){
                return "No";
            }
        }
        
        return "Yes";
    }
};
