/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class NodeValue{
public:
    int maxSize, maxNode, minNode;
    NodeValue(int maxSize, int maxNode, int minNode){
        this->maxSize = maxSize;
        this->maxNode = maxNode;
        this->minNode = minNode;
    }    
};

class Solution {    
private:
    NodeValue solve(Node* root){
        if(!root){
            return NodeValue(0, INT_MIN, INT_MAX);
        }

        auto left = solve(root->left);
        auto right = solve(root->right);

        //If It is a BST --------------->
        if(left.maxNode < root->data && root->data < right.minNode){
            return NodeValue (
                left.maxSize + right.maxSize + 1,
                max(root->data, right.maxNode),
                min(left.minNode, root->data)
            );
        }


        return NodeValue(
            max(left.maxSize, right.maxSize),
            INT_MAX,
            INT_MIN
        );
    }    
public:
    int largestBst(Node* root) {
       return solve(root).maxSize; 
    }
};
