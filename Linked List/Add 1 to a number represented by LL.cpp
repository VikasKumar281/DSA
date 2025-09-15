/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  private:
    Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* forward = NULL;
        
        while(curr){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        
        return prev;
    }
  public:
    Node* addOne(Node* head) {
       if(!head){
           return new Node(1);
       }
       
       int carry = 1;
       head =  reverse(head);
       Node* temp = head;
       Node* prev = NULL;

       while(temp && carry){
           int add = temp->data + carry;
           temp->data = add%10;
           carry = add/10;
           
           prev = temp;
           temp=temp->next;
           
       }
       
       if(carry){
           prev->next = new Node(carry);
       }
       
       return reverse(head);
    }
};

// T.C = O(N)
// S/C. = O(1)
