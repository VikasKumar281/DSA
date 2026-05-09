#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }

    int mini=INT_MAX;
    int first=1;
    int second=2;
    for(int i= 0; i < n; i++){
        int next =(i+1)%n;
        int diff = abs(arr[i] - arr[next]);
        if(diff < mini){
            mini = diff;
            first = i + 1;
            second = next + 1;
        }
    }

    cout<<first<<" "<< second;

    return 0;
}
