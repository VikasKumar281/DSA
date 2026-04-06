public:
    vector<int> makeBeautiful(vector<int> arr) {
        vector<int> st;

        for(int num : arr){
            if(!st.empty()){
                int top = st.back();
                if((top >= 0 &&num < 0) ||(top < 0 && num >= 0)){
                    st.pop_back(); 
                    continue;
                }
            }
            st.push_back(num);
        }

        return st;
    }
};
