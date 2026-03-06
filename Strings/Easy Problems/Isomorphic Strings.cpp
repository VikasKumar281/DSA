class Solution {
public:
    bool areIsomorphic(string s1, string s2) {
        unordered_map<char,char> m1,m2;
        
        for(int i=0;i<s1.size();i++){
            char a=s1[i], b=s2[i];
            
            if(m1.count(a)&&m1[a]!=b){
                return false;
            }
            if(m2.count(b)&&m2[b]!=a){
                return false;
            }
            
            m1[a]=b;
            m2[b]=a;
        }
        
        return true;
    }
};
