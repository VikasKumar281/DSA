#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for(int i =s.size()-1;i>=0;i--){
        if(isalpha(s[i])){
            char c=tolower(s[i]);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
            break;
        }
    }
}
