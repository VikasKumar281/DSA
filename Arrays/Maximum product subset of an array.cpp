class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        int n = arr.size();
        long long MOD = 1e9 + 7;

        if(n == 1){
            return arr[0];
        }

        vector<int> posArr, negArr;
        int zeroCount = 0;

        for(int x : arr){
            if(x >0){
                posArr.push_back(x);
            }
            else if(x < 0){
                negArr.push_back(x);
            }
            else{
                zeroCount++;
            }
        }

        sort(negArr.begin(), negArr.end());

        long long prod = 1;

        for(int x : posArr){
            prod = (prod * x) % MOD;
        }

        int negSize = negArr.size();

        if(negSize % 2 != 0){
            negSize--; 
        }

        for(int i = 0; i < negSize; i++){
            prod = (prod * negArr[i]) % MOD;
        }

        // edge case
        if(prod == 1 && posArr.empty() && negArr.size() <= 1){
            if(zeroCount > 0) return 0;
            return negArr[0];
        }

        return (prod + MOD) % MOD;
    }
};
