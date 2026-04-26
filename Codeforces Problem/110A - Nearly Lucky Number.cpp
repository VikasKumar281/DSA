#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    
    long long count = 0;
    
    while(n > 0){
        long long a = n % 10;
        n = n / 10;
        
        if(a == 4 || a == 7){
            count++;
        }
    }
    
    if(count == 4 || count == 7){
      cout << "YES"<<endl;
    }
    else{
          cout<<"NO"<<endl;
    }
    
    return 0;
}
