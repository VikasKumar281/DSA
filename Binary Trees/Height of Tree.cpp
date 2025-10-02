/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// The height of a tree is defined as the number of edges on the longest path from the root to a leaf node. A leaf node is a node that does not have any children.


class Solution {
  public:
    
    int height(Node* node) {
       if(node == NULL){
           return -1;
       }
       
       int left  = height(node->left);
       int right = height(node->right);
       
       int ans = max(left, right) +1;
       
       return ans;
    }
    
};
