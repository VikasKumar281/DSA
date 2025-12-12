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
    Node* intersectPoint(Node* head1, Node* head2) {
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        while(temp1 != temp2){
            temp1 = (temp1 == NULL) ? head2 : temp1->next;
            temp2 = (temp2 == NULL) ? head1 : temp2->next;
        }
        
        return temp2;
    }
};
