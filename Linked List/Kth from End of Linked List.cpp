/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        Node* temp = head;
        int count = 1;
        while(temp->next!=NULL){
            temp = temp->next;
            count++;
        }
        
        if(k > count){
            return -1;
        }
        
        temp = head;
        int n = count-k;
        for(int i =0;i<n;i++){
            temp = temp->next;
        }
        
        return temp->data;
    }
};
