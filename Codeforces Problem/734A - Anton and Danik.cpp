#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int anton = 0,danik = 0;
    
    for(char c : s){
        if(c == 'A'){
          anton++;
        }
        else{
          danik++;
        }
    }
    
    if(anton > danik){
        cout << "Anton";
    }
    else if(danik>anton){
        cout << "Danik";
    }
    else {
        cout <<"Friendship";
    }
    
    return 0;
}
