int getMiddle(Node *head)
{
    if(head == NULL)
        return -1;
        
    Node *s = head;
    Node *f = head;
    
    while(f != NULL and f->next != NULL)
    {
        s = s->next;
        f = f->next->next;
    }
   
    return s->data;
   // Your code here
}

// fastest approach O(n)