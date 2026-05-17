#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >>n>>k;
    
    int timeLeft = 240 - k;
    int sum =0;
    int count=0;
    
    for(int i = 1; i <= n; i++){
        sum += 5 * i;
        if(sum <= timeLeft){
            count++;
        }
        else{
            break;
        }
    }
    
    cout <<count;
    
    return 0;
}
