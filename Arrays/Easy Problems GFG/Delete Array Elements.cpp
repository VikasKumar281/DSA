class Solution {
  public:
    vector<int> deleteElement(vector<int>& arr, int k) {
        vector<int> st;

        for(int i = 0; i <arr.size();i++) {
            while(!st.empty() && k > 0 && st.back() < arr[i]) {
                st.pop_back();
                k--;
            }
            st.push_back(arr[i]);
        }

        return st;
    }
};
