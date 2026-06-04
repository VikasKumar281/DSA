#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    long long distressed=0;

    for(int i=0;i <n;i++){
        char op;
        long long d;
        cin >> op >> d;

        if (op == '+') {
            x += d;
        } 
        else {
            if (x >= d) {
                x -= d;
            } 
            else {
                distressed++;
            }
        }
    }

    cout << x << " " << distressed << "\n";
    return 0;
}
