class Solution {
  public:
    string oddEven(string s) {
        vector<int> freq(26, 0);

        for(char ch : s) {
            freq[ch - 'a']++;
        }

        int x = 0, y = 0;

        for(int i = 0; i < 26; i++) {
            if(freq[i] == 0) continue;

            int pos = i + 1; // alphabet position

            if(pos % 2 == 0 && freq[i] % 2 == 0) {
                x++;
            }
            else if(pos % 2 == 1 && freq[i] % 2 == 1) {
                y++;
            }
        }

        return ((x + y) % 2 == 0) ? "EVEN" : "ODD";
    }
};
