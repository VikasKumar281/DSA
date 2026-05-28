#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> bus(n);
    bool found = false;

    for (int i = 0; i < n; i++) {
        cin >> bus[i];

        if (!found) {
            if (bus[i][0] == 'O' && bus[i][1] == 'O'){
                bus[i][0] = '+';
                bus[i][1] = '+';
                found = true;
            }
            else if (bus[i][3] == 'O' && bus[i][4] == 'O') {
                bus[i][3] = '+';
                bus[i][4] = '+';
                found = true;
            }
        }
    }

    if (!found) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            cout << bus[i] << "\n";
        }
    }

    return 0;
}
