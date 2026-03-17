class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int maxarea = 0 ;

        for ( int row = 0 ; row < m ; row++)
        {
            for ( int col = 0 ; col < n ; col++)
            {
                if (matrix[row][col]==1 && row > 0) {matrix[row][col] += matrix[row-1][col];
                }
            }
        vector <int> heights = matrix[row];
        sort( heights.begin() , heights.end() , greater<int>());
        for ( int i = 0 ; i < n ; i ++)
        {
            int base =  i+ 1 ;
            int height = heights[i];

            maxarea = max( maxarea ,  base * height ) ;
        }
        }
        return maxarea ;
    }
};
