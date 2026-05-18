class Solution {
  public:
    int maxAND(vector<int>& arr) {
        int ans = 0;
        
        for(int bit = 31; bit >= 0;bit--){
            int temp = ans|(1<<bit);
            int count = 0;
            
            for(int num : arr){
                if((num & temp) == temp) {
                    count++;
                }
            }
            
            if(count >= 2) {
                ans = temp;
            }
        }
        
        return ans;
    }
};
