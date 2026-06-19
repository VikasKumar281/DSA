class Solution {
  public:
    string reverse(string str) {
        int i = 0, j = str.size() - 1;
        
        while (i < j) {
            if (!isalpha(str[i])) {
                i++;
            }
            else if (!isalpha(str[j])) {
                j--;
            }
            else {
                swap(str[i], str[j]);
                i++;
                j--;
            }
        }
        
        return str;
    }
};
