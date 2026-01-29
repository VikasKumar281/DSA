string solve(string a) {
    map<char,int> mp;
    
    for(char c : a){
        if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')){
            mp[c]++;
        }
    }
    
    int count = mp.size();
    
    if(count % 2 == 0){
        return "SHE!";
    }
    return "HE!";
}
