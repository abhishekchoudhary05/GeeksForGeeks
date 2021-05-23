vector<int> leftView(Node *root)
{
    vector<int> result;
    
    if(root == NULL)
        return result;
        
    queue<Node *> qu;
    qu.push(root);
    
    while(!qu.empty())
    {
        result.push_back(qu.front()->data);

        int size = qu.size();
        for(int i=0; i<size; i++)
        {
            Node *temp = qu.front();
            qu.pop();
            
            if(temp->left)
                qu.push(temp->left);
                
            if(temp->right)
                qu.push(temp->right);
        }
    }
    
    return result;
}

// time complexity O(n)
// space complexity O(n)