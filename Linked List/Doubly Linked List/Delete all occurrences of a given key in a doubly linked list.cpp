// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        Node* temp = *head_ref;
       while(temp!=NULL && temp->data == x){
           Node* dummy = temp;
           temp = temp ->next;
           temp->prev = NULL;
           delete dummy;
           *head_ref = temp;
       }
       
       
       while(temp){
           if(temp->data == x){
               Node* dummy = temp;
               Node* prev = dummy->prev;
               prev ->next = dummy->next;
               
               if(dummy->next){
                 dummy->next->prev = prev;
               }
               
               temp = dummy->next;
               delete dummy;
           }
           else{
               temp = temp->next;
           }
       }
        
    }
};
