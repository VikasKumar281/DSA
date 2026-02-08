class Solution {
public:
    bool isPossible(vector<int>& bloomDay , int m, int k, int days){
        int count =0 , bouquets = 0;

        for(int i =0 ; i < bloomDay.size();i++){
            if(bloomDay[i] <= days){
                count++;
            }
            else{
                bouquets += (count/k);
                count = 0;
            }
        }
        bouquets += (count/k);

        if(bouquets >= m){
            return true;
        }

        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());

        if((long long)bloomDay.size() < (long long)m * k){
            return -1;
        }

        int ans = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(isPossible(bloomDay,m,k,mid)){
                ans = mid;
                high = mid - 1;
            } 
            else{
                low = mid + 1;
            }
        }

        return ans;
    }
};
