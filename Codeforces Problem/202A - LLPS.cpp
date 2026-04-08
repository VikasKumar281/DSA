#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for (char ch : s) {
        freq[ch - 'a']++;
    }

    for (int i = 25; i >= 0; i--) {
        if (freq[i] > 0) {
            char ch = 'a' + i;
            for (int j = 0; j < freq[i]; j++) {
                cout << ch;
            }
            break;
        }
    }

    return 0;
}
