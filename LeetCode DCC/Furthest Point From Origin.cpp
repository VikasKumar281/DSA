class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.length();
        
        int countL = 0;
        int countR = 0;
        int countD = 0;

        int res = 0;
    
        for(int i = 0;i<n;i++){
            if(moves[i] == 'L'){
                countL++;
            }
            if(moves[i] == 'R'){
                countR++;
            }
            if(moves[i] == '_'){
                countD++;
            }
        }

        if(countL >= countR){
          res = countL - countR + countD;
        }
        else{
          res = countR - countL + countD;
        } 

        return res;
    }
};
