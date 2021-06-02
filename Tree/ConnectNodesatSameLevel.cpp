class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
        if(root == NULL)
            return;
            
        queue<Node *> qu;
        qu.push(root);
        
        while(!qu.empty())
        {
            int size = qu.size();
            Node *pre = NULL;
            
            for(int i=0; i<size; i++)
            {
                Node *temp = qu.front();
                qu.pop();
                
                if(pre)
                    pre->nextRight = temp;
                
                pre = temp;
                
                if(temp->left)
                    qu.push(temp->left);
                    
                if(temp->right)
                    qu.push(temp->right);
            }
            pre->nextRight = NULL;
            
        }
    }    
};