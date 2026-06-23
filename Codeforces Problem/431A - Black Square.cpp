#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5];

    for (int i = 1; i <= 4; i++) {
        cin >> a[i];
    }

    string s;
    cin >> s;

    long long ans = 0;

    for (char ch : s){
        ans += a[ch-'0'];
    }

    cout << ans;

    return 0;
}
