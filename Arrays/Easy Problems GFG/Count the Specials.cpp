class Solution {
  public:
    int countSpecials(int k, vector<int> &arr) {
        int n = arr.size();
        unordered_map<int,int> freq;
        
        for(int x : arr) {
            freq[x]++;
        }
        
        int target = n /k;
        int count = 0;
        
        for(auto &it : freq){
            if(it.second ==target){
                count++;
            }
        }
        
        return count;
    }
};
