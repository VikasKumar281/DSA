class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> vec;
        for(int i =0;i<m;i++){
            for(int j = 0;j<n;j++){
                vec.push_back(grid[i][j]);
            }
        }

        int size = vec.size();

        
        // sort(begin(vec), end(vec));

        // places the nth element (median) at correct position without fully sorting.
        nth_element(begin(vec), begin(vec) + size/2, end(vec));

        int target = vec[size/2];
        int result = 0;// Minimum no. of Operations
        for(int &num : vec){
            if(num % x != target % x){
                return -1;
            }

            result += abs(num - target) / x;
        }

        return result;
    }
};
