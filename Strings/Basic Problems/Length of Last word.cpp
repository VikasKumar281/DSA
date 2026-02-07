int findLength(string s) {
    int i = s.size() - 1;
    int count = 0;

    while(i >= 0 && s[i] == ' '){
        i--;
    }

    while(i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    return count;
}



int findLength(string s) {
    int n = s.size();
    int count = 0;

    for(int i = 0; i < n; i++){
        if(s[i] != ' '){
            count++;
        }
        else if(i+1<n&& s[i+1] != ' '){
            count = 0;
        }
    }

    return count;
}
