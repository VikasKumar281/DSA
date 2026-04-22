class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int m = queries.size();
        int n = dictionary.size();
        
        vector<string> result;
        for(auto &q : queries){
            for(auto &s : dictionary){
                int diff = 0;
                for(int k = 0;k < q.size();k++){
                    if(q[k] != s[k]){
                        diff++;
                    }
                    if(diff > 2){
                        break;
                    }
                }
                if(diff <= 2){
                    result.push_back(q);
                    break;
                }
            }
        }


        return result;
    }
};
