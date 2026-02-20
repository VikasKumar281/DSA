class Solution {
  public:
    int inOrderSuccessor(Node *root, Node *x) {
        int successor = -1;
        
        while(root != NULL){
            if(x->data >= root->data){
                root = root -> right;
            }
            else{
                successor = root->data;
                root = root-> left;
            }
        }
        
        return successor;
    }
};
