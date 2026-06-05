// User function Template for C++
class Solution {
  public:
    int findDays(string S) {
        int days = 0;
        int mastered = 0;
        int i = 0, n = S.size();

        while (i < n) {
            if (S[i] == '.') {
                int gap = 0;
                while (i < n && S[i] == '.') {
                    gap++;
                    i++;
                }
                
                if (gap > mastered) {
                    days++;
                    mastered = gap;
                }
            } else {
                i++;
            }
        }

        return days;
    }
};
