class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        Node *current = head;
        while(current != NULL and --k)
            current = current->next;
            
        if(current == NULL)
            return head;
            
        Node *kthNode = current;
        
        while(current->next != NULL)
            current = current->next;
            
        current->next = head;
        head = kthNode->next;
        kthNode->next = NULL;
        
        return head;
    }
};

// time complexity O(n)
//space complexity O(1)