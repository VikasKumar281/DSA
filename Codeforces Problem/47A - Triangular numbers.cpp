#include <bits/stdc++.h>
using namespace std;

int main() {
    int loki;
    cin >> loki;

    int moki = 0;

    for (int yuki = 1; moki < loki; yuki++) {
        moki += yuki;
    }

    if (moki == loki) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
