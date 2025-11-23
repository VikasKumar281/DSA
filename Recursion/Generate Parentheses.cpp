class Solution {
public:
    void solve(vector<string> &ans ,string &curr, int n,int open , int close){
        if(curr.length() == 2*n){
              ans.push_back(curr);
            return;
        }
        
        if(open < n){
           curr.push_back('(');
           solve(ans,curr,n,open+1,close);
           curr.pop_back();
        }

        if(close < open){
           curr.push_back(')');
           solve(ans,curr,n,open,close+1);
           curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr = "";
        solve(ans,curr,n,0,0);

        return ans;
    }
};



class Solution {
public:
    bool isValid(string &str){
        int count = 0;
        for(char c:str){
            if(c == '('){
                count++;
            }
            else if(c == ')'){
                count--;
                if(count < 0){
                    return false;
                }
            }
        }

        return count == 0;
    }
    void solve(vector<string> &ans ,string &curr, int n){
        if(curr.length() == 2*n){
            if(isValid(curr)){
              ans.push_back(curr);
            }
            return;
        }
        
        curr.push_back('(');
        solve(ans,curr,n);
        curr.pop_back();
        
        curr.push_back(')');
        solve(ans,curr,n);
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr = "";
        solve(ans,curr,n);

        return ans;
    }
};
