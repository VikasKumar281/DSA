#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;

        for(string &word : words){
            int sum = 0;

            for(char ch : word){
                sum+=weights[ch-'a'];
            }

            int rem = sum %26;
            ans +=char('z'- rem);
        }

        return ans;
    }
};
