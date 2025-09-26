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
    bool helper(TreeNode* Leftroot,TreeNode* Rightroot){\
        if(!Leftroot && !Rightroot){
            return true;
        }
        if(!Leftroot || !Rightroot){
            return false;
        }
        
        if(Leftroot->val != Rightroot->val){
            return false;
        }
        
       return helper(Leftroot->left, Rightroot->right) &&
       helper(Leftroot->right, Rightroot->left);
    }
    bool isSymmetric(TreeNode* root) {
       if(!root){
        return 1;
       } 
       return helper(root->left , root->right);
    }
};

// Time Complexity: O(n)

// Space Complexity: O(h) = O(n) worst case, O(log n) best case
