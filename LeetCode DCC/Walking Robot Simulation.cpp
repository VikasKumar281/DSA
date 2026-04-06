class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string> st;
        for(vector<int> &obs : obstacles){
            // T.C. = O(m)------->
            string key = to_string(obs[0]) + "_" + to_string(obs[1]);
            st.insert(key);
        }

        int x = 0, y = 0, maxD = 0;

        //Pointing to North
        pair<int,int> dir = {0,1};
        for(int i =0;i<commands.size();i++){
            if(commands[i] == -2){
                //Turn left 90 degrees---------->
                dir = {-dir.second, dir.first};
            }
            else if(commands[i] == -1){
                //Turn right 90 degrees----------->
                dir = {dir.second, -dir.first};
            }
            else{
                // Move forward k units, one unit at a time --------------->
                for(int step = 0; step < commands[i] ; step++){
                    int newX = x + dir.first;
                    int newY = y + dir.second;

                    string newKey = to_string(newX) + "_" + to_string(newY);
                    
                    // if(st.count(newKey)){
                    //     break;
                    // }

                    if(st.find(newKey) != st.end()){
                        break;
                    }

                    x = newX;
                    y = newY;
                }

                maxD = max(maxD, x*x + y*y);
            }
        }

        
        return maxD;
    }
};
