class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int,int> mp;

        int k = 2; // 2 baskets.
        int left = 0, right = 0, maxLen = 0;
        while(right < n){
            mp[fruits[right]]++;
            if(mp.size() > k){
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            if(mp.size() <= k){
                maxLen = max(maxLen, right - left + 1);
            }

            right++;
        }

        return maxLen;
    }
};
//T.C. = O(N)
//S.C. = O(1)





class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        
        int maxLen = 0;
        for(int i =0;i<n;i++){
            set<int> st;
            for(int j = i;j<n;j++){
                st.insert(fruits[j]);
                if(st.size()<=2){
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }

        return maxLen;
    }
};
//T.C. = O(N^2)
//S.C. = O(1)
