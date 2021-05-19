class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head == NULL)
            return false;
            
        if(head->next == NULL)
            return false;
            
        Node *s = head;
        Node *f = head;
        
        do
        {
            s = s->next;
            f = f->next->next;
        }
        while(f != NULL and f->next != NULL and s != f);
        
        if(s == f)
            return true;
        else
            return false;
    }
};

// fastest approach
// time complexity O(n)