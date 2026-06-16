#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int different = min(a, b);
    int same =(max(a,b)-different)/2;

    cout<<different << " " <<same << endl;

    return 0;
}
