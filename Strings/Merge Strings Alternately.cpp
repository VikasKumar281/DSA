class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();   
        int n2 = word2.size();

        string merged = "";

        int i = 0 , j =0;
        while(i<n1 && j<n2){ 
            merged.push_back(word1[i]);
            merged.push_back(word2[j]);
            i++;
            j++;
        }  

        while(i<n1){
           merged.push_back(word1[i]);
           i++; 
        }

        while(j<n2){
           merged.push_back(word2[j]);
           j++; 
        }
        
        return merged;
    }
};



class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();   
        int n2 = word2.size();

        string merged;
        merged.reserve(n1+n2);

        int i = 0;
        while(i<n1 || i<n2){  
           if(i<n1){
            merged.push_back(word1[i]); 
           }
           if(i<n2){
             merged.push_back(word2[i]); 
           }
           i++;
        }  
        
        return merged;
    }
};
