class Solution {
public:
    int getMaxCount(vector<int> &freq){
        int maxi = 0;
        for(int i =0;i<freq.size();i++){
            maxi = max(maxi,freq[i]);
        }
        return maxi;
    }
    int getMinCount(vector<int> &freq){
        int mini = INT_MAX;
        for(int i =0;i<freq.size();i++){
            if(freq[i] > 0){
              mini = min(mini,freq[i]);
            }
        }
        return mini;
    }
    int beautySum(string s) {
        int n = s.size();
        int sum =0;
        for(int i =0;i<n;i++){
           vector<int> freq(26,0);
           for(int j =i;j<n;j++){
             freq[s[j]-'a']++;
             int beauty = getMaxCount(freq) - getMinCount(freq);
             sum += beauty;
           }
        }

        return sum;
    }
};
// Time Complexity: O(N^2 * 26) ≈ O(N^2)
// Space Complexity: O(1)
