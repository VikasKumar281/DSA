/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};*/
/*You are required to complete below method*/
Node* deleteAllOccurances(Node* head, int x) {
    
    while(head!=NULL && head->data == x){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    Node* temp = head;
    while(temp && temp->next){
        if(temp->next->data == x){
            Node* temp2 = temp->next;
            temp->next = temp->next->next;
            delete temp2;
        }
        else{
          temp = temp->next;
        }
    }
    
    return head;
}
