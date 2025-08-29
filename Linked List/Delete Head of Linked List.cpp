/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    Node *deleteHead(Node *head) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        
        return head;
    }
};
