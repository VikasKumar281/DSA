class Solution {
  public:
    string stringFilter(string str) {
        int n = str.size();
        
        string temp = "";
        
        for(int i =0;i<n;){
            if(str[i] == 'b'){
                i++;
            }
            else if(i+1 < n && str[i] == 'a' && str[i+1] =='c'){
                i+=2;
            }
            else{
                temp.push_back(str[i]);
                i++;
            }
        }
        
        
        return temp;
    }
};
