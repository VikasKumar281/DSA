int getVal(string &s, int &i){
    if(i+1 < s.size() && s[i] == 'n' && s[i+1] == 'g'){
        i += 2;
        return 14;
    }

    char c = s[i++];
    if(c >'n'){
        return(c -'a') +1;
    }

    return c - 'a';
}

int stringComparison(string s1, string s2) {
    int i = 0, j = 0;

    while(i <s1.size() &&j < s2.size()){
        int v1 =getVal(s1, i);
        int v2= getVal(s2, j);

        if(v1 < v2){
            return -1;
        }
        if(v1 > v2){
            return 1;
        }
    }

    if(i < s1.size()){
        return 1;
    }
    if(j <s2.size()){
        return -1;
    }

    return 0;
}
