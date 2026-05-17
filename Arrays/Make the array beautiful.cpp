class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        vector<int> st;
        for(int i = 0; i < arr.size(); i++) {
            if(!st.empty()) {
                
                int top = st.back();
                
                if((top >= 0 && arr[i] < 0) || (top < 0 && arr[i] >= 0)){
                    st.pop_back();
                }
                else{
                    st.push_back(arr[i]);
                }
            }
            else{
                st.push_back(arr[i]);
            }
        }
        
        return st;
    }
};
