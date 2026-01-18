class Solution {
  public:
    int countTriangles(vector<int>& arr) {
       int n = arr.size();
       if(n<3){
           return 0;
       }
       int count =0;
       sort(arr.begin(),arr.end());
       
       for (int k=n-1;k>=2; k--) {
         int i =0 , j = k - 1;
         while(i<j){
             if(arr[i] + arr[j] > arr[k]){
                 count += (j - i);
                 j--;
             }
             else{
                 i++;
             }
         }
       }
       return count;
    }
};
//T.C. = O(N^2)
//S.C. = O(1)


// TIME LIMIT EXCEEDED(T.C. = O(N^3)) ----------------------------------------------->
class Solution {
  public:
    int countTriangles(vector<int>& arr) {
       int n = arr.size();
       if(n<3){
           return 0;
       }
       int count =0;
       sort(arr.begin(),arr.end());
       
       for (int i=0;i<n - 2; i++) {
            for (int j=i+1;j<n-1;j++){
                for (int k =j+1; k<n; k++){
                    if (arr[i]+arr[j]>arr[k]){
                        count++;
                    }
                }
            }
        }
       
       return count;
    }
};
