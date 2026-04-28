#include<iostream>
using namespace std;
 
int main(){
      int n, m;
      cin>>n>>m;
      
      int total = m;
      int i = 1;
      while(true){
            if(i > n){
                  i = 1;
            }
            
            if(total < i){
                  cout<<total<<endl;
                  break;
            }
            
            total = total - i;
            i++;
      }
      
      return 0;
}
