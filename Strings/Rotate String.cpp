class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }

        string temp = s+s;
        if(temp.find(goal) != string::npos){
            return true;
        }
        // string::npos is a built-in constant in C++ that means “not found”

        return false;
    }
};
// Time: O(n)
// Space: O(1)



class Solution {
public:
    bool rotateString(string s, string goal) {
        int n  = s.size();
        int m = goal.size();

        if(n != m){
            return false;
        }
        
        queue<char> q1,q2;

        for(int i=0;i<n;i++){
            q1.push(s[i]);
        }
        for(int i=0;i<m;i++){
            q2.push(goal[i]);
        }
        
        for(int i = 0;i<n;i++){
            char ch = q1.front();
            q1.pop();
            q1.push(ch);
            if(q1 == q2){
               return true;
            }
        }

        return false;
    }
};
