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
    void helper(TreeNode* node, vector<int> &ans){
        if(!node ){
            return;
        }

        if(node->left){
         helper(node->left , ans);
        }
        ans.push_back(node->val);
        if(node->right){
            helper(node->right,ans);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        helper(root , ans);

        return ans[k-1];
    }
};
