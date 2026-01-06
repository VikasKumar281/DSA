class Solution {
public:
    int maxIndexDiff(vector<int> &arr) {
        int n = arr.size();
        
        vector<int> leftMin(n), rightMax(n);
        
        leftMin[0] = arr[0];
        for(int i = 1; i < n; i++){
            leftMin[i] = min(leftMin[i-1], arr[i]);
        }
        
        rightMax[n-1] = arr[n-1];
        for(int i = n-2; i >= 0; i--){
            rightMax[i] = max(rightMax[i+1], arr[i]);
        }
        
        int i = 0, j = 0, ans = 0;
        
        while(i < n && j < n) {
            if(leftMin[i] <= rightMax[j]) {   
                ans = max(ans, j - i);
                j++;
            } else {
                i++;
            }
        }
        
        return ans;
    }
};
