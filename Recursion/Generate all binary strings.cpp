class Solution {
  public:
    void generate(int n , string &temp , vector<string> &result){
        if(temp.length() == n){
            result.push_back(temp);
            return;
        }
        
        temp.push_back('0');
        generate(n,temp,result);
        temp.pop_back();
        
        temp.push_back('1');
        generate(n,temp,result);
        temp.pop_back();
    }
    vector<string> binstr(int n) {
        vector<string> result;
        string temp = "";
        generate(n,temp,result);
        return result;
    }
};
