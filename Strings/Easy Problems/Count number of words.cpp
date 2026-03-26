int countWords(string s) {
    int count = 0;
    bool inWord = false;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ' || 
           (s[i] == '\\' && i+1 < s.size() && (s[i+1] == 'n' || s[i+1] == 't'))){
            inWord = false;

            if(s[i] == '\\'){
                i++;
            }
        }
        else{
            if(!inWord){
                count++;
                inWord = true;
            }
        }
    }

    return count;
}
