Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node * temp = NULL;
    
    if(head1 == NULL and head2 == NULL)
        return NULL;
        
    if(head1 == NULL)
        return head2;
        
    if(head2 == NULL)
        return head1;
        
    if(head1->data < head2->data)
    {
        temp = head1;
        head1->next = sortedMerge(head1->next, head2);
    }
    else
    {
        temp = head2;
        head2->next = sortedMerge(head1, head2->next);        
    }
    
    return temp;
}

