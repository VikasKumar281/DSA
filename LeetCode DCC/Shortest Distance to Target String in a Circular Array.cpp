class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();

        int minDist = INT_MAX;

        for(int i = 0;i<n;i++){
            if(target == words[i]){
                int straightDist = abs(i - startIndex);
                int circularDist = n - straightDist;
                
                minDist = min({minDist, straightDist, circularDist});
            }
        }

        return minDist == INT_MAX ? -1 : minDist;
    }
};
