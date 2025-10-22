class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i =0 , j = n - 1;

        while(i <= j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
 
    }
};




class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        vector<char> st(n);

        for(int i = 0;i<n;i++){
            st[i] = s[n-i-1];
        }

        s = st;
 
    }
};
