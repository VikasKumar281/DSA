#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin>>n >>d;

    int ans = 0, cnt = 0;

    for(int i = 0;i < d;i++){
        string s;
        cin>>s;

        bool win = false;

        for(char ch : s){
            if(ch =='0'){
                win = true;
                break;
            }
        }

        if(win){
            cnt++;
            ans = max(ans, cnt);
        } 
        else{
            cnt = 0;
        }
    }

    cout << ans << endl;

    return 0;
}
