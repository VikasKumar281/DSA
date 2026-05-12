#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, w;
    cin>>y>>w;

    int mx =max(y, w);

    int num=7 - mx;
    int den=6;

    int gcd = __gcd(num, den);

    cout<<num/gcd << "/" <<den / gcd;

    return 0;
}
