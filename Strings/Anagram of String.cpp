// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string s1, string s2) {
    vector<int> freq(26 , 0);
    
    for(char ch: s1){
        freq[ch - 'a']++;
    }
    
    for(char ch: s2){
        freq[ch - 'a']--;
    }
    
    int count = 0;
    for(int i =0;i< 26;i++){
        count = count + abs(freq[i]);
    }
    
    return count;
}
