class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;

        for(string &word : words){
            mp[word]++;
        }

        vector<pair<string,int>> arr;

        for(auto &it: mp){
            arr.push_back({it.first,it.second});
        }
         
        // Comparator Function---------------> 
        auto lambda = [](pair<string, int> P1, pair<string,int> P2){
            if(P1.second == P2.second){
                return P1.first < P2.first;
            }
            return P1.second > P2.second;
        };
        //  auto lambda = [](pair<string, int> P1, pair<string,int> P2){
        //     if(P1.second == P2.second){
        //         if(P1.first < P2.first){
        //             return true;
        //         }
        //         return false;
        //     }
        //     else{
        //         if(P1.second > P2.second){
        //             return true;
        //         }
        //         return false;
        //     };
        // };
        sort(arr.begin(),arr.end(), lambda);



        int i =0;
        vector<string> result(k);
        while(i<k){
          result[i] = arr[i].first;
          i++;
        }

        return result;
    }
};
