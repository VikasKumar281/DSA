/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL){
            return head;
        }
        
        Node* curr = head;
        Node* newHead = NULL;
        while(curr){
        swap(curr->prev, curr->next);
        newHead = curr;
        curr = curr->prev;
        }
        
        return newHead;
    }
};
