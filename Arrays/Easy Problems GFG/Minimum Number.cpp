// User function Template for C++

class Solution {
public:
    int gcd(int a, int b) {
        if(b == 0){
            return a;
        }
        return gcd(b,a % b);
    }

    int minimumNumber(int n, vector<int> &arr) {
        int ans = arr[0];

        for(int i = 1;i<n;i++) {
            ans =gcd(ans, arr[i]);
        }

        return ans;
    }
};
