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
class NodeValue{
public:
    int sum, maxNode, minNode;
    NodeValue(int sum, int maxNode, int minNode){
        this->sum = sum;
        this->maxNode = maxNode;
        this->minNode = minNode;
    }    
};

class Solution {    
private:
    int ans = 0;

    NodeValue solve(TreeNode* root){
        if(!root){
            return NodeValue(0, INT_MIN, INT_MAX);
        }

        auto left = solve(root->left);
        auto right = solve(root->right);

        //If It is a BST --------------->
        if(left.maxNode < root->val && root->val < right.minNode){
            int currSum = left.sum + right.sum + root->val;
            ans = max(ans, currSum);

            return NodeValue (
                currSum,
                max(root->val, right.maxNode),
                min(left.minNode, root->val)
            );
        }


        return NodeValue(
            0,
            INT_MAX,
            INT_MIN
        );
    }    
public:
    int maxSumBST(TreeNode* root) {
       solve(root);
       return ans; 
    }
};
