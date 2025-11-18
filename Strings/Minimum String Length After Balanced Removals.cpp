class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int n = s.size();

        unordered_map<char,int>mp;
        
        for(char ch:s){
            mp[ch]++;
        }

        int count1 = mp['a'];
        int count2 = mp['b'];

        return abs(count1 - count2); 
    }
};


class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int n = s.size();

        int count1 =0;
        int count2 =0;

        for(int i =0;i<n;i++){
            if(s[i] == 'a'){
                count1++;
            }
            else{
                count2++;
            }
        }

       return abs(count2-count1);
         
    }
};
