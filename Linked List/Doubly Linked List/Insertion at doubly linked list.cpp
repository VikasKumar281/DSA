/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
       Node* newNode = new Node(x);
       
       if(head == NULL){
           head = newNode;
           return head;
       }
        
       Node* temp = head;
       int count =0;
       
       while(temp){
           if(count == p){
              if(temp->next == NULL){
               temp->next = newNode;
               newNode->prev = temp;
              }
              else{
               newNode->next = temp->next;
               temp->next->prev = newNode;
               temp->next = newNode;
               newNode->prev = temp;
              }
              break;
           }  
           count++;
           temp = temp->next;
       }
       
       return head;
    }
};


// T.C. = O(N)
// S.C. = O(1)
