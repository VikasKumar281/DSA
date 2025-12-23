class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m = g.size();
        int n = s.size();

        sort(g.begin(),g.end()); 
        sort(s.begin(),s.end());
        int l =0 , r =0;
        int count =0;
        
        while(l<m && r < n){
            if(g[l] <= s[r]){
                count++;
                l++;
                r++;
            }
            else{
              r++;
            }
        }
      
      return count;
    }
};
//Time Complexity = O(mlogm+nlogn)
//Space Complexity = O(1)
