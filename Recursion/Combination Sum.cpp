class Solution {
public:
    void findCombinationSum(int index,int target ,vector<int>& candidates,vector<vector<int>>& ans,vector<int>& ds){
        if(index == candidates.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }

        // Pick the element ------------>
        if(candidates[index] <= target){
          ds.push_back(candidates[index]);
          findCombinationSum(index,target-candidates[index],candidates,ans,ds);
          ds.pop_back();
        }

        // Skip the element ------------>
        findCombinationSum(index+1,target,candidates,ans,ds);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>> ans;
        findCombinationSum(0,target,candidates,ans,ds);
        return ans;
    }
};

