class Solution {
public:
    string SortedString(string s) {
        vector<char> vowels, consonants;

        for(char ch :s){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowels.push_back(ch);
            }
            else{
                consonants.push_back(ch);
            }
        }

        sort(vowels.begin(),vowels.end());
        sort(consonants.begin(),consonants.end());
        string result="";
        bool vowelTurn;

        if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u'){
            vowelTurn = true;
        }
        else{
            vowelTurn = false;
        }

        int i = 0, j = 0;

        while(i<vowels.size() && j<consonants.size()){
            if(vowelTurn){
                result += vowels[i++];
            }
            else{
                result += consonants[j++];
            }
            vowelTurn = !vowelTurn;
        }

        while(i < vowels.size()){
            result += vowels[i++];
        }

        while(j <consonants.size())
            result += consonants[j++];

        return result;
    }
};
