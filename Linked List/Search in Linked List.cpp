/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        Node* temp = head;
        while(temp!=NULL){
            if( key == temp->data){
                return 1;
            }
            temp = temp->next;
        }
        return 0;
    }
};
