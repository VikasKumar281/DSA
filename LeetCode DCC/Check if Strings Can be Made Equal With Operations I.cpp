class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int i = 0;
        int j = 2;
        while(i < 4 && j < 4){
           if(s1[i] != s2[i]){ 
            swap(s2[i],s2[j]);
           }
           i++;
           j++;
        }
        if(s1 == s2){
            return true;
        }

        return false;
    }
};
