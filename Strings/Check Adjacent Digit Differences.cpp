class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
      for(int i = 0;i<s.size()-1;i++){
          int diff = abs((s[i] - '0') - (s[i+1] - '0'));

          if(diff > 2){
              return false;
          }
      } 

        return true;
    }
};
