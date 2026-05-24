#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char curr = 'a';
    int ans = 0;

    for(char ch : s){
        int diff=abs(ch - curr);

        ans +=min(diff, 26 - diff);

        curr=ch;
    }

    cout<<ans;

    return 0;
}
