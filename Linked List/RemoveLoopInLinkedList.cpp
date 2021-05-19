class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(head == NULL)
            return;
        
        if(head->next == NULL)
            return;
            
        Node *s = head;
        Node *f = head;
        
        do
        {
            s = s->next;
            f = f->next->next;
        }
        while(f != NULL and f->next != NULL and s != f);
        
        if(f == NULL or f->next == NULL)
            return;
           
        if(s == head){
            while(s->next!=head){
                s = s->next;
            }
            
            s->next = NULL;
        }
        
        if(s == f){
            s = head;
            while(s->next != f->next){
                if(s == f->next){
                    f->next == NULL;
                }
                s = s->next;
                f = f->next;
            }
            f->next=NULL;
        }
    }
};

// fastest approach
// time complexity O(n)