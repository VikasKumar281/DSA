class Solution {
public:
    string makeLargestSpecial(string s) {
        vector<string> parts;
        int count = 0, start = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1') {
                count++;
            }
            else{
                count--;
            }

            if(count == 0) {
                string inner = makeLargestSpecial(s.substr(start + 1, i - start - 1));
                parts.push_back("1" + inner + "0");
                start = i + 1;
            }
        }

        sort(parts.rbegin(), parts.rend());

        string result = "";
        for(string &p : parts) result += p;

        return result;
    }
};
