class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    {
        if(head == NULL)
            return head;
            
        struct node *curr = head;
        struct node *res = head;
        stack<int> st;
        int count = k;
        
        while(curr != NULL)
        {
            if(count == 0)
            {
                count = k;

                while(!st.empty())
                {
                    res->data = st.top();
                    st.pop();
                    res = res->next;
                }
            }

            count--;
            st.push(curr->data);
            curr = curr->next;
        }
        
        while(!st.empty())
        {
            res->data = st.top();
            st.pop();
            res = res->next;
        }
                
        return head;
    }
};

// time complexity O(n*k)
// space complexity O(k)