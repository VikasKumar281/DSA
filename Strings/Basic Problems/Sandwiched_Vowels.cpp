class Solution {
  public:
    string Sandwiched_Vowel(string &s) {
        int n = s.size();
        string s2 ="";
        
        unordered_set<char>vowels = {'a','e','i','o','u'};
        
        for(int i =0;i<n;i++){
            if(i>0 && i<n-1){
                if(vowels.count(s[i]) && !vowels.count(s[i-1]) && !vowels.count(s[i+1])){
                    continue;
                }
            }
            s2.push_back(s[i]);
        }
        
        return s2;
    }
};
//T.C. = O(N)
//S.C. = O(N)
