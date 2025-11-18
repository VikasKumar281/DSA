class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int index =0;

        for(int i =1;i<=n;i++){
            res.push_back("Push");

            if(target[index] == i){
                index++;
                if(index == target.size()){
                    break;
                }
            }
            else{
                res.push_back("Pop");
            }
        }

        return res;

    }
};
