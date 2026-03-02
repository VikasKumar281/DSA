int fun(string s) {
    
    if(s.size() <2){
        return 0;
    }
    unordered_set<string> st;

    for(int i = 0;i <s.size() -1;i++){
        st.insert(s.substr(i,2));
    }

    return st.size();
}
