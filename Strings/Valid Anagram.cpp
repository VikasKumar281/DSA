class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        vector<int> freq(26,0);

        for(char ch: s){
            freq[ch - 'a']++;
        }

        for(char ch: t){
            freq[ch - 'a']--;
        }

        int count = 0;
        for(int i =0;i<26;i++){
            count = count + abs(freq[i]);
        }
        if(count == 0){
            return true;
        }

       return false;
    }
};
