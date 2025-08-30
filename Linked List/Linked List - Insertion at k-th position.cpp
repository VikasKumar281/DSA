void insertAfterK(int value, int k) {

    Node* newNode = new Node(value);
    Node* current = head;
    

    if (head == NULL) {
        head = newNode;
        return;
    }
    
    for (int i = 1; i < k; i++) {
        current = current -> next;
    }
    
    newNode->next = current->next;
    
    current->next = newNode;    
}
