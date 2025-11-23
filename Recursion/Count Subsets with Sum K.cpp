// THIS SOLUTION IS CORRECT BUT IT IS GIVING TLE SO WE HAV TO USE DP FOR THIS PROBLEM --------------------------------------------->
void solve(int index ,int sum, int target ,vector<int> &arr,vector<vector<int>> &ans,vector<int> &temp,int n){
	if(index == n){
		if(sum == target){
           ans.push_back(temp);
		}
		return;
	}

	temp.push_back(arr[index]);
	solve(index+1,sum + arr[index],target,arr,ans,temp,n);
	
	// Backtrack ------------------------------------>
	temp.pop_back();

	// exclude arr[index] ------------------------------------>
    solve(index+1,sum,target,arr,ans,temp,n);

}
int findWays(vector<int>& arr, int k)
{
	vector<int> temp;
	vector<vector<int>> ans;

    solve(0,0,k,arr,ans,temp,arr.size());
	return ans.size();
}
