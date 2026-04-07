#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> arr(4);
    
    for(int i=0;i<4;i++){
        cin >>arr[i];
    }
    unordered_set<int>st(arr.begin(),arr.end());
    
    cout <<4-st.size()<<endl;
    
    return 0;
}
