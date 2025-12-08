class Solution {
  public:
    void func(int index,vector<int> &arr,int sum,vector<int> &ans){
        if(index == arr.size()){
            ans.push_back(sum);
            return;
        }
       
       // Pick the element 
       func(index+1,arr,sum + arr[index],ans);
        
        // Skip the element 
       func(index+1,arr,sum,ans); 
    }
    vector<int> subsetSums(vector<int>& arr) {
        vector<int> ans;
        func(0,arr,0,ans);
        return ans;
    }
};
