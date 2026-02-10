// User function template for C++
class Solution {
  public:

    int search(string X, string Y) {
        int pres = -1;
        int m = X.size();
        int n = Y.size();
        
        int i = 0;
        while(i <= m-n){
            int j =0;
            if(X[i] == Y[0]){
                while(j < n && X[i+j] == Y[j]){
                    j++;
                }
                if(j == n){
                  pres = i+1;
                }
            }
            i++;
        }
        
        return pres;
    }
};
