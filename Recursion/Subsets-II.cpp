class Solution {
public:
    void solve(vector<int> &nums,vector<int> &temp,vector<vector<int>> &ans,int index){
        int n = nums.size();
        if(index == n){
            ans.push_back(temp);
            return;
        }

        // Include --------------------->
        temp.push_back(nums[index]);
        solve(nums,temp,ans,index+1);
        temp.pop_back();

        //Excluding ---------------------------------->
        int i = index+1;
        while(i<n && nums[i] == nums[i-1]){
            i++;
        }

        solve(nums,temp,ans,i);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<vector<int>> ans; 
       vector<int> temp;
       solve(nums,temp,ans,0);
       return ans; 
    }
};
