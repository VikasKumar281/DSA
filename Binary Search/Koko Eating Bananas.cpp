class Solution {
private:
    int max(vector<int> & piles){
       int n = piles.size();

       int maxi = INT_MIN;
       for(int i = 0;i<n;i++){
          if(maxi < piles[i]){
            maxi = piles[i];
          }
       }

       return maxi;
    }
    long long calculateTotalHours(vector<int> &piles , int mid){
        long long totalH = 0;
        for(int pile : piles){
            totalH += (pile + mid - 1) / mid;
        }

        return totalH;
    }    
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = max(piles);

        while(start<=end){
           int mid = start + (end - start)/2;
           long long totalhrs = calculateTotalHours(piles , mid);

           if(totalhrs <=h){
            end = mid - 1;
           }
           else {
            start = mid + 1;
           }
        }

        return start;
    } 
};
