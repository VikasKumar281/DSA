class Solution {
  public:
    int minSwaps(string& s1, string& s2) {
        int a = 0, b = 0;
        
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] =='1'&&s2[i] =='0'){
                a++;
            }
            else if(s1[i] =='0' &&s2[i] == '1'){
                b++;
            }
        }
        
        if((a +b) % 2){
            return -1;
        }
        
        return (a / 2) + (b / 2) + 2 * (a % 2);
    }
};
