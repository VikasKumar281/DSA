class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        int n = nums.size();
        vector<int> ans;

        for(int i =0;i<n;i++){
            if(nums[i] >= 0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
         
        int i =0 , j=0; 
        int n1 = pos.size() , n2 = neg.size();

        while(i<n1 && j<n2){
            ans.push_back(pos[i]);
            i++;
            ans.push_back(neg[j]);
            j++;
        }
        return ans;
    }
};
//T.C. = O(N)
//S.C. = O(N)


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;

        for (int num : nums) {
            if (num >= 0){
                pos.push_back(num);
            }
            else{
                neg.push_back(num);
            }
        }

        vector<int> ans;
        int i = 0, j = 0;
        int n = nums.size();

        while (i < pos.size() && j < neg.size()) {
            ans.push_back(pos[i++]);  
            ans.push_back(neg[j++]); 
        }

        while (i < pos.size()) ans.push_back(pos[i++]);
        while (j < neg.size()) ans.push_back(neg[j++]);

        return ans;
    }
};
