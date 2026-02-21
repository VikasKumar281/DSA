class Solution {
  public:
    string roundToNearest(string& s) {
        int n = s.size();
        if(s[n - 1] >'5'){
            int i = n - 2;
            while (i >= 0 && s[i] == '9') {
                s[i] = '0';
                i--;
            }
            if(i < 0){
                s = "1" + s;
            } 
            else{
                s[i]++;
            }
        }
        s.back() = '0';
        return s;
    }
};
