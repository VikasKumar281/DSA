class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
       unordered_map<int,int>mp;
     
       for(int i=0;i<n;i++){
        int x = nums[i];
      
        int y = target - x;

        if(mp.find(y) != mp.end()){
           return {i ,mp[y]};
        }
        mp[x]=i;
       }
       return {};
    }
};

// Time Complexity => O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
       vector<int>ans;
       int sum =0;
       for(int i =0;i<n;i++){
         for(int j =i+1;j<n;j++){
            sum = nums[i] + nums[j]; 
            if(sum == target){
                ans.push_back(i);
                ans.push_back(j);
            }
         }
       }
     return ans;
    }
};

// Time Complexity => O(n^2)
