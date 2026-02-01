// RECURSION WITH MEMOIZATION ------------------------------------------------------------------------------>
class Solution {
public:
    int n;
    unordered_set<string> st;
    int t[301];

    bool solve(int index , string &s){
        if(index >= n){
            return true;
        }
        
        if(t[index] != -1){
            return t[index];
        }

        for(int len = 1; len <= n - index ; len++){
            string temp = s.substr(index,len);

            if(st.find(temp) != st.end() && solve(index+len , s)){
                return t[index] = true;
            }
        }

        return t[index] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict){
        n = s.length();
        memset(t, -1, sizeof(t));
        st.clear();

        for(string &word : wordDict){
            st.insert(word);
        }

        return solve(0 , s);
    }
};
// Time: O(n²)
// Space: O(n)





// RECURSION WITHOUT MEMOIZATION ------------------------------------------------------------------------------>
class Solution {
public:
    int n;
    unordered_set<string> st;

    bool solve(int index , string &s){
        if(index >= n){
            return true;
        }

        if(st.find(s) != st.end()){
            return true;
        }

        for(int len = 1; len <= n ; len++){
            string temp = s.substr(index,len);

            if(st.find(temp) != st.end() && solve(index+len , s)){
                return true;
            }
        }

        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict){
        n = s.length();

        for(string &word : wordDict){
            st.insert(word);
        }

        return solve(0 , s);
    }
};
// Time.C. => O(2^n)	
// S.C. => O(n)
