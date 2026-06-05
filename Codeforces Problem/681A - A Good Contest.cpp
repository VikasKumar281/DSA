#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool ok = false;

    while(n--){
        string name;
        int before,after;
        cin >> name>>before>>after;

        if(before >= 2400 &&after > before){
            ok = true;
        }
    }

    cout<<(ok ? "YES" : "NO") << '\n';

    return 0;
}
