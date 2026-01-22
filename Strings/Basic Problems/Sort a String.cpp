// Counting Sort (for lowercase letters ONLY) ---------------------------------------------------------->
string sort(string s) {
    int freq[26] = {0};
    
    for(char ch:s){
        freq[ch - 'a']++;
    }
    
    int idx = 0;
    for(int i = 0;i<26;i++){
        while(freq[i]--){
            s[idx++] = char(i + 'a');
        }
    }
    
    return s;
}
// Time: O(n)
// Space: O(1)




// SORT USING SELECTION SORT --------------------------------------------------------------------->
string sort(string s) {
    int n = s.size();
    
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(s[i]>s[j]){
                swap(s[i], s[j]);
            }
        }
    }
    return s;
}
//T.C. = O(N^2);
//S.C. = O(1)


string sort(string s) {
    std::sort(s.begin(),s.end());
    return s;
}
//T.C.= O(Nlog N);
//S.C.= O(log N);
