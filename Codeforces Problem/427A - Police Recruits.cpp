#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int officers = 0;
    int untreated = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x == -1){
            if(officers>0)
                officers--;
            else
                untreated++;
        } 
        else{
            officers += x;
        }
    }

    cout<<untreated<<endl;

    return 0;
}
