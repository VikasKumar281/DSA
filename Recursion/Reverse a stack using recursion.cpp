class Solution {
  public:
    void insertAtBottom(stack<int> &st , int temp){
        if(st.empty()){
            st.push(temp);
            return;
        }
        
        int val = st.top();
        st.pop();
        
        insertAtBottom(st,temp);
        st.push(val);
        
    }
    void reverseStack(stack<int> &st) {
        if(!st.empty()){
            int temp = st.top();
            st.pop();
            
            reverseStack(st);
            
            insertAtBottom(st,temp);
        }
        else{
            return;
        }
    }
};
