#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n--){
        vector<int> arr(3);   // size fix
        for(int i = 0; i < 3; i++){
            cin >> arr[i];
        }
        int ones = 0;
        for(int i = 0; i < 3; i++){
            if(arr[i] == 1){
                ones++;
            }
        }
        if(ones >= 2){
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}
