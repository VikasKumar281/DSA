#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;

    vector<int> p(n), t(n);

    for(int i = 0; i < n; i++){
          cin >> p[i];
    }
    for(int i = 0; i < n; i++){
          cin >> t[i];
    }
    int limak = 0, radewoosh = 0;

    int time = 0;
    for (int i = 0;i < n; i++){
        time += t[i];
        limak += max(0, p[i] -c * time);
    }

    time = 0;
    for (int i = n - 1; i >= 0; i--) {
        time += t[i];
        radewoosh += max(0, p[i] - c * time);
    }

    if(limak > radewoosh){
        cout << "Limak\n";
    }
    else if(radewoosh >limak){
        cout << "Radewoosh\n";
    }
    else{
        cout << "Tie\n";
    }

    return 0;
}
