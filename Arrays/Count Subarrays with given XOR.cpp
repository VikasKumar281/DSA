class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n = arr.size();
        map<int,int> mpp;
        int xr = 0;
        
        mpp[xr]++;
        
        int count =0;
        
        for(int i =0;i<n;i++){
            xr = xr ^ arr[i];
            
            int x = xr ^ k;
            count += mpp[x];
            
            mpp[xr]++;
        }
        
        return count;
    }
};
//T.C. = O(N)
//S.C. = O(N)




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
