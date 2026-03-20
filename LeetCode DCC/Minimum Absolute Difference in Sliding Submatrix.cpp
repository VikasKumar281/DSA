class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> result((m-k+1), vector<int>((n-k+1),0));

        for(int i =0;i<=m-k;i++){
           for(int j =0;j<=n-k;j++){
            set<int> st;
            for(int a = i;a <= i+k-1;a++){
                for(int b = j;b <= j+k-1;b++){
                    st.insert(grid[a][b]);
                }
            }

            if(st.size() == 1){
                result[i][j] = 0;
                continue;
            }
            
            int minAbsDiff = INT_MAX;
            auto prev = st.begin(); 
            auto curr = next(prev);

            while(curr != st.end()){
                minAbsDiff = min(minAbsDiff, *curr - *prev);
                prev = curr;
                curr++; 
            } 

            result[i][j] = minAbsDiff;
           }
        }


        return result;
    }
};
