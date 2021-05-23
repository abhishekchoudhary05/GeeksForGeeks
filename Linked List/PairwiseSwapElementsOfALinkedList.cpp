class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if(head == NULL or head->next == NULL)
            return head;
            
        Node *curr = head, *prev = NULL, *nex = NULL;
        int count = 0;

        while(curr != NULL and count < 2)
        {
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
            count++;
        }
        
        if(nex != NULL)
        {
            Node *recHead = pairWiseSwap(nex);
            head->next = recHead;
        }
        
        return prev;
    }
};