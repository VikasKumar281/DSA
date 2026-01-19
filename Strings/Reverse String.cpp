class Solution {
  public:
    string reverseString(string& s) {
        int n= s.size();
        string s2 = "";
        
        int right = n-1;
        while(right>=0){
            s2.push_back(s[right]);
            right--;
        }
        
        return s2;
    }
};
// Time Complexity = O(n)
// Space Complexity = O(n)



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
// Time Complexity = O(n)
// Space Complexity = O(1)




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
// Time Complexity = O(n)
// Space Complexity = O(n)
