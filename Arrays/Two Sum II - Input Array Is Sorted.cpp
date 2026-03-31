class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int low = 0;
        int high = n-1;
        
        while(low<=high){
            int sum = numbers[low] + numbers[high];
            if(sum == target){
                return{low+1,high+1};
            }
            else if(sum < target){
                low++;
            }
            else{
                high--;
            }
        }

        return {};
    }
};
//T.C. = O(N)
//S.C. = O(1)


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0;
        int r = n-1;

        for(int i =0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int sum = numbers[i] + numbers[j];
                if(sum == target){
                    return {i+1, j+1};
                }
            }
        }

        return {};
    }
};
//T.C. = O(N^2)
//S.C. = O(1)
