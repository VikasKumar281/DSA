#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, n;
    cin>>a>>b>>n;

    int turn = 0;

    while(true){
        if(turn ==0){
            int g = __gcd(a, n);
            if(g > n){
                cout<<1;
                break;
            }
            n -=g;
        } 
        else{
            int g = __gcd(b, n);
            if(g >n){
                cout << 0;
                break;
            }
            n -= g;
        }
        turn ^= 1;
    }

    return 0;
}
