string ReverseSort(string str) {
    int n = str.size();
    string ans = "";
    vector<int> freq(26,0);
    for(char c:str){
        freq[c-'a']++;
    }
    
    for(int i =25;i>=0;i--){
        while(freq[i]--){
            ans.push_back('a'+i);
        }
    }
    
    return ans;
}
