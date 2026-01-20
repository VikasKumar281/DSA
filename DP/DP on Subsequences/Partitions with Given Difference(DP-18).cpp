// MEMOIZATION APPROACH ---------------------------------------------------------------------------------------->
class Solution {
  public:
    int mod = 1e9+7;
    int helper(vector<int>&arr,vector<vector<int>> &dp,int index,int target){
        if(index == 0){
            if(target == 0 && arr[0] == 0){
                return 2;
            }
            if(target == 0 || arr[0] == target){
                return 1;
            }
            return 0;
        }
        
        if(dp[index][target] != -1){
            return dp[index][target];
        }
        
        int skip = helper(arr , dp,index -1,target);
        int pick = 0;
        if(arr[index] <= target){
            pick = helper(arr , dp , index-1,target-arr[index]);
        }
        
        return dp[index][target] = (skip + pick) % mod;
    }
    int findways(vector<int> &arr,int target){
        int n = arr.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return helper(arr,dp,n-1,target);
    }
    int countPartitions(vector<int>& arr, int diff) {
        int totalSum = 0;
        for(auto &it:arr){
            totalSum += it;
        }
        
        if(totalSum - diff < 0 || (totalSum -diff)%2){
            return false;
        }
        
        return findways(arr,(totalSum - diff)/2);
    }
};
// Time =	O(n × target)
// Space = O(n × target)
