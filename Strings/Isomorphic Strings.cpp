class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, char> mp1, mp2;
        // mp1 => to store mapping from s => t
        // mp2 => to store mapping from t => s


        for (int i = 0; i < t.size(); i++) {
            char c1 = s[i], c2 = t[i];

            if (mp1.count(c1) && mp1[c1] != c2){
                return false;
            }

            // mp1.count(c1) returns:
              // 1 → if the key c1 exists in the map
              // 0 → if the key c1 does not exist

            if (mp2.count(c2) && mp2[c2] != c1){
                return false;
            }

            mp1[c1] = c2;
            mp2[c2] = c1;
        }

        return true;


    }
};
