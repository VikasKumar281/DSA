/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* newNode = new Node(x);
        Node* temp = head;
        
        if(head == NULL){
            head = newNode;
            return head;
        }
        
        while(temp->next != NULL){
            temp = temp->next;
           
        }
         if(temp->next == NULL){
              temp->next = newNode;
            }
       
        
        return head;
    }
};
