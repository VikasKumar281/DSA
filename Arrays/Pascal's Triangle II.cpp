class Solution {
public:
    int nCr(long long n , long long r){
        if(r > n){
            return 0;
        }
        if(r == 0 || r== n){
            return 1;
        }

        long long res = 1;
        for(long long i = 1;i<=r;i++){
            res = res * (n - r + i)/i;
        }

        return res;
    }
    vector<int> getRow(int rowIndex) {
        vector<int > arr;
        long long n = rowIndex;
        
        for(long long c = 1;c<=n+1;c++){
            arr.push_back((int)nCr(n, c-1));
        }

        return arr;
    }
};
