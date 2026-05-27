class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();

        vector<int> firstOccCap(26,-1), lastOccSma(26,-1);

        for(int i =0;i<n;i++){
            if(islower(word[i])){
                lastOccSma[word[i] - 'a'] = i;
            }
            else if(firstOccCap[word[i] - 'A'] == -1){
                firstOccCap[word[i] - 'A'] = i;
            }
        }

        int count = 0;

        for(int i=0;i<26;i++){
            if(lastOccSma[i] != -1 && firstOccCap[i]!=-1 && lastOccSma[i] < firstOccCap[i]){
                count++;
            }
        }

        return count;
    }
};
