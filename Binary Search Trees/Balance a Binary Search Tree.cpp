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
    TreeNode* constructBST(int left , int right , vector<int> &nums){
        if(left > right){
            return NULL;
        }

        int mid = left + (right - left)/2;

        TreeNode* newRoot = new TreeNode(nums[mid]);
        newRoot->left = constructBST(left , mid-1, nums); 
        newRoot->right = constructBST(mid+1 , right, nums); 

        return newRoot;
    }
    void inorder(TreeNode* root,vector<int> &nums){
        if(!root){
           return;
        }
        
        inorder(root->left,nums);
        nums.push_back(root->val);
        inorder(root->right,nums);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nums;
        inorder(root , nums);

        int l = 0;
        int r = nums.size() - 1;

        return constructBST(l,r,nums);
    } 
};
