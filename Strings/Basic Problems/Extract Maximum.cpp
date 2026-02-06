class Solution {
  public:
    int extractMaximum(string S) {
        long long mx = -1;
        long long num = 0;
        bool found = false;

        for(char c :S){
            if(c >='0'&&c<='9'){
                num = num * 10 + (c - '0');
                found = true;
            }
            else {
                if(found) mx = max(mx, num);
                num = 0;
                found = false;
            }
        }

        if(found){
            mx = max(mx, num);
        }
        return mx;
    }
};
