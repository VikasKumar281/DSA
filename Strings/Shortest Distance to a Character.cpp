class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> temp;
        
        for(int i =0;i<n;i++){
            if(s[i] == c){
                temp.push_back(i);
            }
        }
        
        vector<int>ans(n,0);
        for(int i =0;i<n;i++){
            int mini = INT_MAX;
            for(int pos: temp){
              mini = min(mini,abs(i-pos));
            }
            ans[i] = mini;
        }

        return ans;
    }
};


