class Solution {
public:
    int minOperations(string s) {
        int op1 = 0, op2 = 0;
        for(int i = 0;i < s.size();i++) {
            if(i% 2==0) {
                if(s[i] != '0'){
                    op1++;
                }
                if(s[i] !='1'){
                    op2++;
                }
            } 
            else{
                if(s[i]!='1'){
                    op1++;
                }
                if(s[i] !='0'){
                    op2++;
                }
            }
        }
        return min(op1, op2);
    }
};
