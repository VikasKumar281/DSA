class Solution {
public:
    bool solve(vector<int> &arr, int i){
        int n = arr.size();
        if(i < 0 || i >= n || arr[i] < 0){
            return false;
        }

        if(arr[i] == 0){
            return true;
        }

        arr[i] *= -1;

        bool a = solve(arr, i + arr[i]);
        bool b = solve(arr, i - arr[i]);

        return a||b;
    }
    bool canReach(vector<int>& arr, int start) {
        return solve(arr, start);
    }
};
