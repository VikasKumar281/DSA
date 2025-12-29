class Solution {
  public:
    int RedOrGreen(int N, string S) {
          int countR = 0, countG = 0;

        for(char ch : S){
            if(ch == 'R') {
                countR++;
            }
            else {
                countG++;
            }
        }

        return min(countR, countG);
        
    }
};
