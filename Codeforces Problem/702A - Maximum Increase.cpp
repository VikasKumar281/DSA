#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    
    int currentLen = 1;
    int maxLen = 1;
    
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]){
            currentLen++;
        } 
        else{
            currentLen = 1;
        }
        
        maxLen = max(maxLen, currentLen);
    }
    
    cout << maxLen;
    
    return 0;
}
