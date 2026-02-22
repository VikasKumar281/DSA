class Solution {
  public:
    int binary_to_decimal(int B) {
        string temp = to_string(B);
        
        long long pow2 = 1;
        long long num = 0;
        
        int len = temp.size();
        
        for(int i = len-1; i >=0;i--){
            if(temp[i] == '1'){
                num = num + pow2;
            }
            
            pow2 = pow2 * 2; 
        }
        
        return (int)num;
    }
};
