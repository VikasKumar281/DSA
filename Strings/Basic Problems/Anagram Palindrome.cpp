int isPossible(string S) {
    unordered_map<char, int> mp;

    for(char c:S) {
        mp[c]++;
    }

    int oddCount = 0;
    for(auto it:mp){
        if(it.second % 2 != 0) {
            oddCount++;
        }
    }

    if(oddCount>1){
        return 0;
    }
    
    return 1;
}
