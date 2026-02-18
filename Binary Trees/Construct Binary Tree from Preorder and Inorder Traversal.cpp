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
    TreeNode* solve(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd,map<int,int> &mp){
        if(preStart > preEnd || inStart > inEnd){
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[preStart]);

        int inRoot = mp[root->val];// It stores the value(index) of root.
        int numsLeft = inRoot - inStart;

        root -> left = solve(preorder,preStart+1,preStart + numsLeft,inorder, inStart,inRoot - 1,mp);
        root -> right = solve(preorder, preStart + 1 + numsLeft, preEnd, inorder, inRoot + 1, inEnd, mp);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(inorder.size() != preorder.size()){
            return NULL;
        }
        map<int,int> mp;

        for(int i =0;i<inorder.size();i++){
            mp[inorder[i]] = i;
        }

        return solve(preorder,0, preorder.size()-1, inorder,0,inorder.size() - 1,mp);
    }
};
