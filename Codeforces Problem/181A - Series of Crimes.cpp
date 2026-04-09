#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> pts;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            if (s[j] == '*') {
                pts.push_back({i, j});
            }
        }
    }

    int r, c;

    if (pts[0].first == pts[1].first)
        r = pts[2].first;
    else if (pts[0].first == pts[2].first)
        r = pts[1].first;
    else
        r = pts[0].first;

    if (pts[0].second == pts[1].second)
        c = pts[2].second;
    else if (pts[0].second == pts[2].second)
        c = pts[1].second;
    else
        c = pts[0].second;

    cout << r + 1 << " " << c + 1;
}
