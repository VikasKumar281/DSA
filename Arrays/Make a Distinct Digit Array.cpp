class Solution {
  public:
    vector<int> common_digits(vector<int> nums) {
      
        vector<bool> seen(10, false);
        for (int num : nums) {
            while (num > 0) {
                int d = num % 10;   
                seen[d] = true;     
                num /= 10;          
            }
        }
      
        vector<int> result;
        for (int d = 0; d <= 9; d++) {
            if (seen[d]) result.push_back(d);
        }
      
        return result;
    }
};
