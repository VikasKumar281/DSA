class Solution {
public:
    int minimumDeletions(string s) {
        stack<int>st;
        int n = s.size();
        string temp = "";
        int count = 0;

        for(int i =0;i<n;i++){
            if(!st.empty() && s[i] == 'a' && st.top() == 'b'){
             st.pop();
             count++;
            }
            else{
                st.push(s[i]);
            }   
        }

        return count;
    }
};
