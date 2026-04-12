class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        
        int count = 0;
        for(int i =0;i<n;i++){
            int num = nums[i];  
            if(num == 0 && digit == 0){
              count++;
            }
            while(num > 0){
                int digi = num % 10;
                num /= 10;

                if(digi == digit){
                    count++;
                }
            }
        }

        return count;
    }
};
