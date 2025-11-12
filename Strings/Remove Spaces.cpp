class Solution {
  public:
    string modify(string& s) {
        int n = s.size();
        
        string temp = "";
        queue<char>q;
        for(int i=0;i<n;i++){
            if(s[i] != ' '){
                q.push(s[i]);
            }
        }
        
        while(!q.empty()){
            temp.push_back(q.front())                                                                                                                                                                                                                                                                                                                                                                                                         ;
            q.pop();
        }
        
        return temp;
    }
};
