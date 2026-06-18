string transform(string str) {
        string ans;
        
        for(char ch : str) {
            char lower=tolower(ch);
            
            if(lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u'){
                continue;
            }
            
            ans += '#';
            
            if (islower(ch))
                ans += toupper(ch);
            else
                ans+=tolower(ch);
        }
        
        return ans.empty() ? "-1":ans;
}
