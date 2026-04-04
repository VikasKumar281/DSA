class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int length = encodedText.size();
        int columns = length / rows;

        string res;

        for(int cols = 0;cols<columns; cols++){
            for(int j = cols; j<length;j += (columns+1)){
                res += encodedText[j];
            }
        } 

        while(!res.empty() && res.back() == ' '){
            res.pop_back();
        }

        return res;
    }
};
//T.C. = O(length)
//S.C. = O(1)
