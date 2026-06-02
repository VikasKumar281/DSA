#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int,int>> arr;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        arr.push_back({x, i + 1});
    }
    
    sort(arr.begin(), arr.end());
    
    int left = 0;
    int right = n - 1;
    
    while (left < right) {
        cout << arr[left].second << " " << arr[right].second << endl;
        
        left++;
        right--;
    }
    
    return 0;
}
