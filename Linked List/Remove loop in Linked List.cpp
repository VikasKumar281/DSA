/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
       if(head == NULL || head->next == NULL){
           return;
       }    
       
       Node* slow = head;
       Node* fast = head;
       
       while(fast && fast->next){
           slow = slow->next;
           fast = fast->next->next;
           
           if(slow == fast){
               break;
           }
       }
       
       if(slow != fast){
           return;
       }
       
       slow = head;
       if(slow == fast){
           while(fast->next != slow){
               fast = fast->next;
           }
       }
       else{
           while(slow->next != fast->next){
               slow = slow->next;
               fast = fast ->next;
           }
       }
       
       
       fast->next = NULL;
    }
};
