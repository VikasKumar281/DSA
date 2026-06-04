int solve(string N) {
    vector<int> freq(10, 0);

    for (char ch : N) {
        freq[ch - '0']++;
    }

    int ans = 0, mx = 0;

    for(int i = 0; i <=9;i++){
        if (freq[i] > mx){
            mx = freq[i];
            ans = i;
        } 
        else if(freq[i] == mx) {
            ans = max(ans, i);
        }
    }

    return ans;
}
