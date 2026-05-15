class Solution {
public:
    int equalSum(vector<int> &arr) {
        long long total =0;

        for(int i = 0;i < arr.size();i++){
            total+=arr[i];
        }

        long long leftSum=0;

        for(int i = 0; i <arr.size();i++){
            total -=arr[i];

            if(leftSum == total){
                return i;
            }

            leftSum +=arr[i];
        }

        return -1;
    }
};
