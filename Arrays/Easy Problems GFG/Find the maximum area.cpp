class Solution {
  public:
    int maxArea(vector<int>& arr) {
        int mx = 0;
        for(int x :arr){
            if(x>mx){
                mx = x;
            }
        }
        return mx * mx;
    }
};
