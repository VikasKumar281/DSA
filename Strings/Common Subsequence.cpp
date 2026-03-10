class Solution {
  public:
    int commonSubseq(string a, string b) {
        vector<int> freq(26,0);
        
        for(char c : a){
            freq[c-'A'] = 1;
        }
        
        for(char c : b){
            if(freq[c-'A']) return 1;
        }
        
        return 0;
    }
};
