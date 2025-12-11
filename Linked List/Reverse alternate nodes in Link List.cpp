/*
  reverse alternate nodes and append at the end
  The input list will have at least one element
  Node is defined as
  struct Node
  {
      int data;
      struct Node *next;

      Node(int x){
        data = x;
        next = NULL;
      }

   };

*/


class Solution {
public:
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next; 
        }
        
        return prev;
    }
    
    void rearrange(Node* head) {
        if (!head || !head->next){ 
             return;
        } 
        
        Node* odd = head;
        Node* even = head->next;
        Node* evenHead = even;
   
        while(odd->next && even->next){
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        
        Node* reversed = reverse(evenHead);
        
        odd->next = reversed;
        
    }
};
