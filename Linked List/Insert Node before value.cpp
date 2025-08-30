/****************************************************************
Following is the Linked list node structure already written

class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    { 
        this->data = data;
        next = NULL;
    }
};
*****************************************************************/

Node* insertBeforeValue(Node* head, int x, int val){
    Node* temp = head;
    Node* prev = NULL;
    Node* newNode = new Node(x);

    if(head == NULL){
        head = newNode;
        return head;
    }
    //Insert at head=>
    if(head->data == val){
      newNode->next = head;
      head = newNode;
      return head;
    }

    while(temp){
        if(temp->data == val){
          newNode->next = prev->next;
          prev->next = newNode;
          break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

// T.C. = O(N)
// S.C. = O(1)
