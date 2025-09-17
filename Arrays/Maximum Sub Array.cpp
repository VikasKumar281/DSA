// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        vector<int>ans;
        int n = arr.size();
        
         int count = 0;
        for(int i =0;i<n;i++){
            if(arr[i] < 0){
                count++;
            }
        }
        if(count == n){
            return {-1};
        }
        
        
        int index = 0;
        vector<pair<int,int>> result;
        int i =0 , j=0;
        while(i<n){
            int sum = 0;
            index =i;
            while( j<n && arr[j] >= 0){
                sum += arr[j];
                j++;
            }
            if(sum >= 0){
               result.push_back({index , sum});
            }
            i = j + 1;
            j =i;
        }
        
        int index2 = 0;
        int maxi = INT_MIN;
        for(auto it: result){

            if((maxi < it.second) || (it.second == maxi && it.first < index2)){
              index2 = it.first;
              maxi = max(maxi , it.second);
            }
        }
        
        for(int i = index2;i<n;i++){
            if(arr[i]>=0){
                ans.push_back(arr[i]);
            }
            else{
                break;
            }
        }
        
      return ans;
    }
};


// T.C = S.C. = O(n)
