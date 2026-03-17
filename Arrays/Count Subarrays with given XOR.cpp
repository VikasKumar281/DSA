





class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n = arr.size();
        
        int count =0;
        
        for(int i =0;i<n;i++){
            int Xor = 0;
            for(int j =i;j<n;j++){
                Xor = Xor ^ arr[j];
                if(Xor == k){
                  count++;
                }
            }
        }
        
        return count;
    }
};
//T.C. = O(N^2)
//S.C. = O(1)
