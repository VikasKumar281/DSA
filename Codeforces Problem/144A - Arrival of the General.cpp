#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int maxIdx = 0, minIdx = 0;

    for(int i = 0; i < n; i++){
        if(a[i] > a[maxIdx]){
            maxIdx =i;
        }
        if(a[i] <= a[minIdx]){
            minIdx=i;
        }
    }

    int ans = maxIdx+(n - 1 - minIdx);

    if(maxIdx>minIdx){
        ans--;
    }

    cout << ans;
}
