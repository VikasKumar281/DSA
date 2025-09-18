// User function template for C++

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
  public:
    Node* divide(Node* head) {
        if (!head || !head->next){
            return head;
        }
        
        Node* even = new Node(0);
        Node* tail1 = even;
        
        Node* odd = new Node(0);
        Node* tail2 = odd;
        
        Node* temp = head;
        while(temp){
           if(temp->data % 2 ==0){
               tail1->next = temp;
               tail1 = tail1->next;
           }
           else{
               tail2->next = temp;
               tail2 = tail2 ->next;
           }
           temp= temp->next;
        }

        tail1->next = odd->next;
        delete odd;
        
        tail2->next = NULL;
        
        Node* result = even->next;
        delete even;
        
        return result;
    }
};

// T.C. = O(n)
// S.C. = O(1)
