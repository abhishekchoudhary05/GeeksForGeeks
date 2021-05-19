int intersectPoint(Node* head1, Node* head2)
{
    if(head1==NULL)
        return -1;

    if(head2==NULL)
        return -1;

    // count length of both link list
    int len1=0,len2=0;
    Node *t=head1,*fptr=NULL,*sptr=NULL;

    while(t){
        len1++;
        t=t->next;
    }

    t=head2;
    while(t){
        len2++;
        t=t->next;
    }

    // calculate diff and increase bigger link list by diff times
    int diff;
    if(len1>len2)
    {
        diff=len1-len2;
        fptr=head1;sptr=head2;
        while(diff){
            fptr=fptr->next;
            diff--;
        }
    }
    else{
        diff=len2-len1;
        fptr=head2;sptr=head1;
        while(diff){
            fptr=fptr->next;
            diff--;
        }
    }

    while(sptr!=fptr){
        sptr=sptr->next;
        fptr=fptr->next;
    }

    if(sptr==NULL)
        return -1;
    else
        return sptr->data;
}

// complexity O(n)