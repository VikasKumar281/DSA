class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> st;

        for(char ch:s){
            if(ch == '[' || ch =='{' || ch == '('){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }    
                
                char t = st.top();
                st.pop();
                
                if(ch == '}' && t != '{' || ch == ')' && t != '(' || ch == ']' && t != '['){
                  return false;
                }
            }
        }
        
        return st.empty();
    }
};
