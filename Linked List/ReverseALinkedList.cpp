Node* reverse(Node *head)
{
    if(head==NULL)
        return NULL;

    if(head->next==NULL)
        return head;

    Node *temp=reverse(head->next);
    head->next->next=head;
    head->next=NULL;

    return temp;
}

// recursive approach