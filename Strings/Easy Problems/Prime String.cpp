class Solution {
  public:
    bool isPrimeString(int N, string str) {
        int sum = 0;
        
        for(char ch : str){
            sum += (int)ch;
        }
        
        if(sum <= 1) return false;
        
        for(int i = 2; i * i <= sum; i++){
            if(sum % i == 0){
                return false;
            }
        }
        
        return true;
    }
};
