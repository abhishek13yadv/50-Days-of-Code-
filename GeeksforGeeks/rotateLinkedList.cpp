Node* rotate(Node* head, int k) {
    // Your code here
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    //Node* end;
    while(k--)
    {
        temp->next=head;
        head=head->next;
        temp=temp->next;
        temp->next=NULL;
        
    }
   // end->next = NULL;
    return head;
}
