/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  private:
    void helper(Node* root , vector<int> &ans){
         if(!root){
             return;
         }
         
        if(root->left){
           helper(root->left , ans);
        }
         ans.push_back(root->data);
        if(root->right){
             helper(root->right, ans);
        }
    }
  public:
    int kthLargest(Node *root, int k) {
        vector<int>ans;
        helper(root , ans);
        int n = ans.size();
        return ans[n-k];
    }
};
