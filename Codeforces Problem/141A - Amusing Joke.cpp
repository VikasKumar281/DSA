class Solution {
public:
    void solve() {
        string a, b, c;
        cin >>a>>b>>c;

        vector<int>freq(26, 0);

        for(char ch :a){
            freq[ch -'A']++;
        }
        for(char ch : b){
            freq[ch-'A']++;
        }
        for(char ch:c){
            freq[ch-'A']--;
        }

        for(int i = 0; i < 26; i++){
            if(freq[i] != 0){
                cout << "NO";
                return;
            }
        }

        cout << "YES";
    }
};
