#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;

    vector<int> bulb(m + 1, 0);

    for(int i = 0; i<n;i++){
        int x;
        cin >>x;

        while(x--){
            int y;
            cin>>y;
            bulb[y] = 1;
        }
    }

    for(int i = 1; i <= m;i++){
        if(!bulb[i]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
