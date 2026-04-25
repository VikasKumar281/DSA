class Solution {
  public:
    void rearrangeArray(vector<int>& a) {
        int n = a.size();
        sort(a.begin(), a.end());

        vector<int> res;
        int l = 0, r = n - 1;

        while(l <= r){
            if(l == r){
                res.push_back(a[l]);
            } 
            else{
                res.push_back(a[l]);
                res.push_back(a[r]);
            }
            l++;
            r--;
        }

        a = res;
    }
};
