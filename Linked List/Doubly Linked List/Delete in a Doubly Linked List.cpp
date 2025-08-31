/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        if(head == NULL){
            return NULL;
        }
        
        if(head->next == NULL){
            delete head;
            return NULL;
        }
        
        if(x == 1){
            Node* temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
            
            return head;
        }
        
        if(x>1){
        
           Node* temp = head;
           Node* back = NULL;
           int count =1;
        
          while(temp){
            if(count == x && temp->next!=NULL){
               back->next = temp->next;
               temp->next->prev = back;
               delete temp;
               break;
            }
            
            if(count == x && temp->next == NULL){
               back->next =NULL;
               delete temp;
               break;
            }
            count++;
            back = temp;
            temp = temp->next;
          }
        }
        
        
        
        return head;
    }
};

// T.C. = O(N)
// S.C. = O(1)
