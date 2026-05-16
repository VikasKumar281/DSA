#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n < 2) return false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    for(int m = 1; m <= 1000; m++) {
        if(!isPrime(n * m + 1)) {
            cout << m;
            break;
        }
    }

    return 0;
}
