class Solution {
  public:
    int isPossible(string S){
        int n =S.size();
        
        if(n<4){
            return 0;
        }
        
        for(int i =1; i<= n-3;i++){
            for(int j = i + 1; j<=n -2;j++){
                for(int k= j+ 1;k<= n -1;k++){
                    string a = S.substr(0, i);
                    string b = S.substr(i, j -i);
                    string c = S.substr(j, k -j);
                    string d = S.substr(k);
                    
                    if(a!= b && a != c &&a != d &&b!= c && b !=d&&c!= d){
                        return 1;
                    }
                    
                }
            }
        }
        
        return 0;
    }
};
