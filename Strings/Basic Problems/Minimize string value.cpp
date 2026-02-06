class Solution {
  public:
    int minValue(string S, int K) {
        vector<int> freq(26, 0);
        
        for (char c : S) {
            freq[c-'a']++;
        }
        
        while(K--){
            sort(freq.begin(), freq.end(), greater<int>());
            if(freq[0] > 0){
                freq[0]--;
            }
        }
        
        int ans = 0;
        for (int f : freq) {
            ans += f * f;
        }
        
        return ans;
    }
};
//T.C = O(N + K);
//T.C = O(1);
