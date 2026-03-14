class Solution {
public:
    void solve(vector<string> &result, string &curr, int n){
        if(curr.length() == n){
            result.push_back(curr);
            return;
        }

        for(char ch = 'a'; ch <= 'c'; ch++){
            if(!curr.empty() && curr.back() == ch){
               continue;
            }

            curr.push_back(ch);//DO 
            solve(result, curr, n);//EXPLORE
            curr.pop_back();//UNDO
        }
    }
    string getHappyString(int n, int k) {
        string curr = "";
        vector<string> result;
        solve(result, curr, n);

        if(k > result.size()){
            return "";
        }

        return result[k-1];
    }
};
