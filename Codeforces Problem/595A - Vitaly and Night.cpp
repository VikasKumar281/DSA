#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n>>m;

    int ans = 0;

    for(int i = 0; i < n; i++){
        vector<char> windows(2*m);

        for(int j = 0; j< 2* m;j++){
            cin>>windows[j];
        }

        for(int j = 0; j < 2 * m; j +=2){
            if(windows[j]=='1' || windows[j + 1] == '1') {
                ans++;
            }
        }
    }

    cout << ans << '\n';
    return 0;
}
