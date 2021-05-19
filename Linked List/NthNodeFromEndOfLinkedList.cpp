int getNthFromLast(Node *head, int n)
{
    if(head == NULL)
        return -1;
        
    Node *f = head;
    Node *s = head;
    
    while(n and f != NULL)
    {
        f = f->next;
        n--;        
    }
        
    if(f == NULL and n != 0)
        return -1;
        
    while(f != NULL)
    {
        s = s->next;
        f = f->next;
    }
    
    return s->data;
}

// fastest approach
// time complexity O(n)