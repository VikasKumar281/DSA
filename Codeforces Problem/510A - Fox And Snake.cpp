#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >>n >>m;

    for(int i = 0; i < n;i++){
        if(i % 2 == 0){
            cout <<string(m, '#') <<"\n";
        } 
        else{
            if((i / 2) % 2 == 0){
                cout <<string(m - 1, '.')<< "#\n";
            } 
            else{
                cout<<"#" <<string(m - 1, '.') << "\n";
            }
        }
    }

    return 0;
}
