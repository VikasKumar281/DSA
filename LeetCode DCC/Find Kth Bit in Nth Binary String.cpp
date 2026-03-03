class Solution {
public:
    char solve(int n, int k) {
        if(n ==1){
            return '0';
        }

        int len = (1 << n) - 1;
        int mid = (len / 2) + 1;

        if(k == mid){
            return '1';
        }

        if(k <mid){
            return solve(n - 1, k);
        }
        else{
            char ch =solve(n - 1,len - k + 1);
            return(ch == '0') ?'1' :'0';
        }
    }

    char findKthBit(int n, int k) {
        return solve(n, k);
    }
};
