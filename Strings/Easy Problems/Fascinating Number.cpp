class Solution {
  public:

    bool fascinating(int n) {
       int n1 = 2 * n;
       int n2 = 3 * n;
       
       string temp = "";
       temp += to_string(n);
       temp += to_string(n1);
       temp += to_string(n2);
       
       if(temp.size() != 9){
           return false;
       }
       
       vector<int> freq(10,0);
       
       for(char c: temp){
           if(c == '0'){
               return false;
           }
           freq[c - '0']++;
       }
       
       for(int i =1;i<=9;i++){
           if(freq[i] != 1){
               return false;
           }
       }
       
       return true;
    }
};
