#include <iostream>
#include <set>
#include <cctype>
using namespace std;

int main() {
    int n;
    string s;

    cin>>n;
    cin>>s;

    set<char> letters;

    for(char ch : s){
      letters.insert(tolower(ch));
    }

    cout<<(letters.size() == 26 ? "YES": "NO");

    return 0;
}
