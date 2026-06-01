int maxIncreasingSum(vector<int>& arr) {
    int n = arr.size();
    
    int currentSum = arr[0];
    int maxSum = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            currentSum += arr[i];
        } else {
            currentSum = arr[i];
        }
        
        maxSum = max(maxSum, currentSum);
    }
    
    return maxSum;
}
