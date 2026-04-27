#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
      
    int second = n - 10;
      
    if(second < 1 || second > 11){
        cout << 0 << endl;
    }
    else if(second == 10){
        cout << 15 << endl;
    }
    else{
        cout << 4 << endl;
    }
      
    return 0;
}
