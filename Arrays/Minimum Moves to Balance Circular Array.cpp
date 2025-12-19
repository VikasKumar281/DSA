class Solution {
public:
    long long minMoves(vector<int>& balance) {
        int n = balance.size();
        long long moves = 0;
        long long sum =0;
        int k = -1;
        for(int i =0;i<n;i++){
            sum += balance[i];
            if(balance[i] < 0){
                k = i;
            }
        }

        if(sum < 0){
            return -1;
        }
        if(k == -1){
            return 0;
        }

        long long need = - balance[k];

        for(int d = 1;d<n && need > 0;d++){
           int leftIndex = (k -d + n)%n;
           int rightIndex = (k+d)%n;

           if(balance[leftIndex] > 0 && need > 0){
            long long take = min((long long) balance[leftIndex] , need);
            moves += take * d;
            need -= take;
            balance[leftIndex] -= take;
           }

           if(balance[rightIndex] > 0 && need > 0){
            long long take = min((long long) balance[rightIndex] , need);
            moves += take * d;
            need -= take;
            balance[rightIndex] -= take;
           }
        }

      return moves;      
    }
};
// Time Complexity = O(n)
// Space Complexity = O(1)
