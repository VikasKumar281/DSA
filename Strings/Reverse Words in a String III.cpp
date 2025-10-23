class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        stack<string>st;
        string word = "";
        
        for(int i =0;i<n;i++){
            if(s[i] == ' '){
                if(!word.empty()){
                    st.push(word);
                    word = "";
                }
            }
            else{
                word += s[i];
            }
        }

        if(!word.empty()){
            st.push(word);
        }

        s = "";
        while(!st.empty()){
            s +=st.top();
            st.pop();

           if(!st.empty()){
            s += " ";
           }
        }



        string ans = "";

        for(int i =n-1;i>=0;i--){
            ans.push_back(s[i]);
        }

        return ans;
    }
};
