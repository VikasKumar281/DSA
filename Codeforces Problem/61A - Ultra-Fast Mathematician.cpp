#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    
    string res = "";
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == b[i]) res += '0';
        else res += '1';
    }
    
    cout << res;
    
    return 0;
}
