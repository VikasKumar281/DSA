// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/
Node *deleteHead(Node *head) {
    
    if(head == NULL){
        return NULL;
    } 
    
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    
    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    
    delete temp;
    
    return head;
    
}
