class Solution {
public:
    string reverse(const string& S) {
        stack<char> st;
        
        for (char ch : S) st.push(ch);

        string ans;
        
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};
