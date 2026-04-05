class Solution {
  public:
    int maxRepeating(int k, vector<int>& arr) {
        int n = arr.size();
        vector<int> freq(k,0);
        
        for(int i: arr){
            freq[i]++;
        }
        
        int maxFreq = 0;
        int ans =-1;
        for(int i =0;i<k;i++){
            if( freq[i] > maxFreq){
                maxFreq = freq[i];
                ans = i;
            }
            
        }
        
        return ans;
    }
};
