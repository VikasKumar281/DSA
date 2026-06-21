#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    set<char> st;

    for (char c : s) {
        if (c >= 'a' && c <= 'z'){
            st.insert(c);
        }
    }

    cout << st.size();

    return 0;
}
