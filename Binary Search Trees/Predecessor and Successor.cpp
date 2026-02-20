/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        Node* successor = NULL;
        Node* predecessor = NULL;
        Node* curr = root;
        
        while(curr != NULL){
            if(key > curr->data){
                predecessor = curr;
                curr = curr->right;
            }
            else if(key < curr->data){
                successor = curr;
                curr = curr->left;
            }
            else{
                // key == curr(root) -> data;
                Node* temp = curr -> left;
                while(temp){
                    predecessor = temp;
                    temp = temp -> right;
                }
                
                temp = curr-> right;
                while(temp){
                    successor = temp;
                    temp = temp->left;
                }
                
                break;
            }
        }
    
        return {predecessor, successor};
    }
};
// Time Complexity => O(H)
// Space Complexity => O(1)
