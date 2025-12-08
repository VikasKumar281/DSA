/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    Node* reverse(Node* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
         
        while(curr!=NULL){
          next = curr ->next;    
          curr->next = prev;
          prev = curr;
          curr = next;
        }
        
        return prev;
    }
    void reorderList(Node* head) {
        if(!head || !head->next){
            return;
        }
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        Node* second = reverse(slow->next);
        slow->next = NULL;
        
        Node* first = head;
        
        while(first && second){
            Node* temp1 = first->next;
            Node* temp2 = second->next;
            
            first->next = second;
            second->next = temp1;
            
            first = temp1;
            second = temp2;
        }
    }
};
