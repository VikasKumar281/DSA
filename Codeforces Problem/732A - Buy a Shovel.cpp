#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for(int i = 1; i<=10;i++){
        int total = k * i;

        if(total % 10 == 0 ||total%10 == r){
            cout << i;
            break;
        }
    }

    return 0;
}
