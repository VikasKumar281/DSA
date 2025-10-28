class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
      int i = 0, j = 0;
        int n1 = str1.size(), n2 = str2.size();

        while (i < n1 && j < n2) {
            char c1 = str1[i];
            char next = (c1 == 'z') ? 'a' : c1 + 1;

            if (str2[j] == c1 || str2[j] == next)
                j++;

            i++;
        }

        return j == n2;  
    }
};
