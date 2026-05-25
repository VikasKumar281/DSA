#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    vector<int> arr = {x1, x2, x3};

    sort(arr.begin(), arr.end());

    cout << arr[2] - arr[0];

    return 0;
}
