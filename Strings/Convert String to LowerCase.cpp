class Solution {
  public:
    string toLower(string& s) {
        for(char &c : s) {
            c = tolower(c);
        }
        return s;
    }
};
