#include <iostream>
using namespace std;

int main() {
    long long k, n,w;
    cin >> k>>n>>w;

    long long totalCost =k *w*(w + 1)/2;
    long long borrow= max(0LL,totalCost-n);

    cout <<borrow<<endl;

    return 0;
}
