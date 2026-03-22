class Solution {
  public:
    vector<string> orderString(string s[], int n) {
        string mini = s[0],maxi = s[0];
        
        for(int i =1; i<n;i++){
            if(s[i]<mini){
                mini= s[i];
            }
            if(s[i]> maxi){
                maxi =s[i];
            }
        }
        
        return{mini,maxi};
    }
};
