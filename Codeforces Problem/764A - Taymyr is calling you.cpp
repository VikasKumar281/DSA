#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, z;
    cin >>n>>m>>z;
    int l = lcm(n, m);
    cout << z/ l;

    return 0;
}
