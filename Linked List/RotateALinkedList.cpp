class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        if(head == NULL)
            return head;
        
        queue<int> qu;
        Node *t = head;
        
        while(k--)
        {
            qu.push(t->data);
            t = t->next;
        }
        
        Node *q = head;
        while(t != NULL)
        {
            q->data = t->data;
            q = q->next;
            t = t->next;
        }
        
        while(!qu.empty())
        {
            q->data = qu.front();
            qu.pop();
            q = q->next;
        }
        
        return head;
    }
};

// time complexity O(n)
// space complexity O(n)