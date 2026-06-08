#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    cout <<2 *(n/3)+min(1LL, n % 3);

    return 0;
}
