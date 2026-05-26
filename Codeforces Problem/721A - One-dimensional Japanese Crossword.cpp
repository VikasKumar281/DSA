#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    vector<int> ans;
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == 'B') {
            count++;
        } else {
            if(count > 0) {
                ans.push_back(count);
                count = 0;
            }
        }
    }
    
    if(count > 0) {
        ans.push_back(count);
    }
    
    cout << ans.size() << endl;
    
    for(int x : ans) {
        cout << x << " ";
    }
    
    return 0;
}
