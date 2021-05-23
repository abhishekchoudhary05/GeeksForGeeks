class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head == NULL)
            return NULL;
            
        Node *curr = head, *prev = NULL, *nex = NULL;
        
        while(curr != NULL)
        {
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        
        return prev;
    }
};