#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<vector<int>> a(n, vector<int>(n, 1));

    for(int i = 1; i < n; i++){
        for(int j = 1; j < n;j++){
            a[i][j] =a[i - 1][j]+a[i][j - 1];
        }
    }

    cout <<a[n - 1][n - 1]<< endl;

    return 0;
}
