#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> cake(n);
    for (int i = 0; i < n; i++){
        cin >> cake[i];
    }

    long long ans = 0;

    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if (cake[i][j] == 'C'){
                  cnt++;
            }
        }
        ans += 1LL * cnt * (cnt - 1) / 2;
    }

    for (int j = 0; j < n; j++) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (cake[i][j] == 'C') cnt++;
        }
        ans += 1LL * cnt * (cnt - 1) / 2;
    }

    cout << ans << '\n';
    return 0;
}
