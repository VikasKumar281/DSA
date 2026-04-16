class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int m = grid.size();
        vector<int> freq(m*m + 1, 0);
        
        for(int i=0;i<m;i++){
            for(int j =0;j<m;j++){
              freq[grid[i][j]]++;
            }
        }

        int rept = -1, mis = -1;

        for(int i =0;i<m*m+1;i++){
            if(freq[i] == 0){
               mis = i;
            }
            if(freq[i] == 2){
                rept = i;
            }
        }

        return {rept, mis};
    }
};
