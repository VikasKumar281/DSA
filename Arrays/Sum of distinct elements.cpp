class Solution {
  public:
    int findSum(vector<int>& arr) {
        int n = arr.size();
        long long sum =0;
         
        unordered_set<int> s;
        
        for(auto &it:arr){
            s.insert(it);
        }
        
        for(int x:s){
            sum += x;
        }
        
        return sum;
    }
};
