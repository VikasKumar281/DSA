int minDiff(vector<int> &arr, int k) {
    int n = arr.size();

    if (k == 0 || n == 0) return 0;

    sort(arr.begin(), arr.end());

    int ans = INT_MAX;

    for (int i = 0; i + k - 1 < n; i++) {
        ans = min(ans, arr[i + k - 1] - arr[i]);
    }

    return ans;
}
