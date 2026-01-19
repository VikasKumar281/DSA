class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        
        if(n1 != n2){
            return false;
        }
        
        vector<int> cnt(26,0);
        for(char ch:s1){
            cnt[ch-'a']++;
        } 
        for(char ch:s2){
            cnt[ch-'a']--;
        } 
        
        for(int x:cnt){
            if(x != 0){
                retur false;
            }
        }
        
        return true;
    }
};
//T.C. = O(N)
//S.C. = O(1)



class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int n1 = s1.size();
        int n2 = s2.size();
        
        if(n1 != n2){
            return false;
        }
        
        for(int i = 0; i < n1; i++) {
            if (s1[i] != s2[i]) {
                return false;
            }
        }        
        return true;
    }
};
//T.C. = O(NlogN)
//S.C. = O(N)
