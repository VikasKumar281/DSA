class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int n = arr.size();
        vector<int> res;
        
        for(int i =0;i<n;i++){
            if(arr[i] == x){
                res.push_back(i);
            }
        }
        int m = res.size();
        
        if(m == 0){
            return {-1,-1};
        }
        
        return {res[0],res[m-1]};
    }
};
