/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root , vector<int> & ans,stack<int> &st){
        if(!root){
            return;
        }
        st.push(root->val);
        helper(root->left , ans , st);
        helper(root->right ,ans, st);
        ans.push_back(st.top());
        st.pop();
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<int>st;
        if(!root){
           return ans;
        }
        helper(root , ans, st);

        return ans; 
    }
};

// T.C. = S.C. = O(N)
