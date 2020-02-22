bool detectLoop(struct SinglyLinkedListNode* h)
{
    unordered_set<SinglyLinkedListNode*> s;
    while(head!=NULL)
    {
        if(s.find(head) != s.end())
        {
            return true;
        }
        s.insert(head);
        head=head->next;
    }
    return false;
}




//Using Slow and fast pointer


int detectloop(Node* list) 
{ 
    Node *slow_p = list, *fast_p = list; 
  
    while (slow_p && fast_p && fast_p->next) { 
        slow_p = slow_p->next; 
        fast_p = fast_p->next->next; 
        if (slow_p == fast_p) { 
            cout << "Found Loop"; 
            return 1; 
        } 
    } 
    return 0; 
} 
