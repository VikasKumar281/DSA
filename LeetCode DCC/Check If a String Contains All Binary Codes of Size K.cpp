class Solution {
public:
    bool hasAllCodes(string s, int k) {
        // totalcodes = 2 ^ k
        int n = s.size();

        unordered_set<string> st;

        for(int i = k;i<=n;i++){
           st.insert(s.substr(i-k,k));
        }

        return st.size() == (1 << k);
    }
};





class Solution {
public:
    int pow(int a , int k){
        int res = 1;
        for(int i =0;i<k;i++){
           res = res * a;
        }

        return res;
    }
    bool hasAllCodes(string s, int k) {
        // totalcodes = 2 ^ k
        int n = s.size();

        unordered_set<string> st;

        for(int i = k;i<=n;i++){
           st.insert(s.substr(i-k,k));
        }

        int n2 = st.size();
        if(n2 == pow(2,k)){
            return true;
        }

        return false;
    }
};
