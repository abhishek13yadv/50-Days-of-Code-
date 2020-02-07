Node* reverseList(Node *head)
{
  // Your code here
    if(head == NULL) 
        return head;
    Node*curr = head,*prev = NULL,*next = NULL;
    while(curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr= next;
    }
    return prev;
}
