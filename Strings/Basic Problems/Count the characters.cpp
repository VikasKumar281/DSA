class Solution {
  public:
    int getCount(string S, int N) {
        vector<int>freq(26,0);
        for(int i = 0;i<S.size();i++){
            if(i==0 || S[i] != S[i-1]){
              freq[S[i]-'a']++;
            }
        } 
        
        int count =0;
        for(int i:freq){
            if(i == N){
                count++;
            }
        }
        
        return count;
    }
};
