#include <bits/stdc++.h>
using namespace std;

int main() {
    string loki, moki;
    cin >>loki>>moki;

    reverse(loki.begin(),loki.end());

    if(loki == moki){
       cout << "YES";
    } 
    else{
       cout << "NO";
    }

    return 0;
}
