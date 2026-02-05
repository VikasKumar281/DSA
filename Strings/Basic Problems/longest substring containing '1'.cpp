int maxlength(string s) {
    int maxLen = 0, curr = 0;
    for (char c : s) {
        if (c == '1') {
            curr++;
            maxLen = max(maxLen, curr);
        } else {
            curr = 0;
        }
    }
    return maxLen;
}
