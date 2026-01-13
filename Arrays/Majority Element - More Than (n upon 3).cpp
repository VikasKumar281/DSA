class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        int c1 = 0, c2 = 0;
        int e1 = 0, e2 = 1;

        for(int x : arr){
            if(x == e1) c1++;
            else if(x == e2) c2++;
            else if(c1 == 0){
                e1 = x;
                c1 = 1;
            }
            else if(c2 == 0){
                e2 = x;
                c2 = 1;
            }
            else{
                c1--;
                c2--;
            }
        }

        c1 = c2 = 0;
        for(int x : arr){
            if(x == e1) c1++;
            else if(x == e2) c2++;
        }

        vector<int> ans;
        if(c1 > n/3) ans.push_back(e1);
        if(c2 > n/3) ans.push_back(e2);

        sort(ans.begin(), ans.end());
        return ans;
    }
};
