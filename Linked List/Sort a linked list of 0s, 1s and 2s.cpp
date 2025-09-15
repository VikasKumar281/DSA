/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        int count[3] = {0,0,0};
        
        Node* temp = head;
        while(temp){
            count[temp->data]++;
            temp = temp->next;
        }
        
        temp = head;
        
        // for(int i =0;i<3;i++){
        //     while(count[i]--){
        //         temp->data = i;
        //         temp = temp->next;
        //     }
        // }
        
        int i = 0;
        while(temp){
            if(count[i] == 0){
                i++;
            }
            else{
              temp->data = i;
              count[i]--;
              temp = temp->next;
            }
        }
        return head;
    }
};
