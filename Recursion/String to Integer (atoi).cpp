class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long long b = 0;
        int sign = 1;
        int i =0;

        // Skip Leading spaces ----------------------------------->
        while(i<n && (s[i] == ' ')){
            i++;
        }

        // Handling Sign ----------------------------------->
        if(i < n && (s[i] == '-' || s[i] == '+')){
            if(s[i] == '-'){
              sign = -1;
            }
            i++;
        }


        // Convert Digits ----------------------------------->
        while(i<n && (s[i]>= '0' && s[i] <='9')){
            b = b * 10 + (s[i] - '0');
            
            if(sign == 1 && b > INT_MAX){
               return INT_MAX;
            }
            if(sign == -1 && -b < INT_MIN ){
                return INT_MIN;
            }

            i++;
        } 

        return sign * b;
    }
};
