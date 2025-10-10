class Solution {
  private:
    int pow(int mid , int n){
        int ans = 1;
        for(int i = 0;i<n;i++){
            ans = ans*mid;
        }
        return ans;
    }
  public:
    int nthRoot(int n, int m) {
        if(m == 0 || m == 1){
            return m;
        }
        
        int start = 0;
        int end = m;
        
        int ans = -1;
        
        while(start <= end){
            long long mid = start + (end - start)/2;
            
            if(pow(mid,n) == m){
                ans = mid;
                return ans;
            }
            else if( pow(mid , n) < m){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
        return ans;
        
    }
};
