class Solution {
  public:
    int shortestDistance(vector<string> &s, string word1, string word2) {
        int n = s.size();
        int idx1 = -1, idx2 = -1;
        int minDist = INT_MAX;

        for(int i = 0; i<n; i++){
            if(s[i] ==word1){
                idx1 = i;
            }
            if(s[i] ==word2){
                idx2 = i;
            }

            if(idx1 !=-1 &&idx2 !=-1){
                minDist = min(minDist, abs(idx1 - idx2));
            }
        }

        return minDist;
    }
};
