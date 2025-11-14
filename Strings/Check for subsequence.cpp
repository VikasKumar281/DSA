
class Solution {
  public:
    bool isSubSequence(string A, string B) {
       int n1 = A.size();
       int n2 = B.size();
       
       int i = 0,j =0;
       while(i<n1 && j<n2){
           if(A[i] == B[j]){
               i++;
           }
           j++;
       }
       
       if(i == A.length()){
           return true;
       }
       
       return false;
    }
};
