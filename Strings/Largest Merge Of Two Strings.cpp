class Solution {
public:
    string largestMerge(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();

        string merge = "";
        
        int i = 0 , j =0;
        while(i<n1 && j < n2){
            if(word1.substr(i) <= word2.substr(j)){
                merge.push_back(word2[j++]);
            }
            else{
                merge.push_back(word1[i++]);
            }
        } 

        while(i<n1){
            merge.push_back(word1[i++]);
        }

        while(j<n2){
            merge.push_back(word2[j++]);
        }

        return merge;
    }
};
