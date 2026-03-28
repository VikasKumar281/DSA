class Solution {
public:
    string findTheString(vector<vector<int>>& lcp) {
        int n = lcp.size();

        for(int i = 0; i < n;i++){
            if(lcp[i][i] != n - i){
                return "";
            }
            for(int j = 0; j < n; j++){
                if(lcp[i][j] != lcp[j][i]){
                  return "";
                }
            }
        }

        vector<int> p(n);
        iota(p.begin(),p.end(), 0);

        function<int(int)> f = [&](int x){
            return p[x] == x ? x : p[x] = f(p[x]);
        };

        auto u = [&](int a, int b){
            a = f(a), b = f(b);
            if(a != b){
                p[b] = a;
            }
        };

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(lcp[i][j] > 0){
                    u(i, j);
                }
            }
        }

        vector<char> an(n);
        map<int, char> mp;
        char ch = 'a';

        for(int i = 0; i < n; i++){
            int r = f(i);
            if(!mp.count(r)){
                if(ch > 'z'){
                    return "";
                }
                mp[r] = ch++;
            }
            an[i] = mp[r];
        }

        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        for(int i = n - 1; i >= 0; i--){
            for(int j = n - 1; j >= 0; j--){
                if(an[i] == an[j]){
                    dp[i][j] = 1 + dp[i + 1][j + 1];
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(dp[i][j] != lcp[i][j]){
                    return "";
                }
            }
        }

        return string(an.begin(), an.end());
    }
};
