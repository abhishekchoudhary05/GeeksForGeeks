Node *merge(Node *a, Node *b)
{
    Node *res = NULL;
    
    if(a == NULL)
        return b;
        
    if(b == NULL)
        return a;
        
    if(a->data < b->data)
    {
        res = a;
        a->bottom = merge(a->bottom, b);
    }
    else
    {
        res = b;
        b->bottom = merge(a, b->bottom);        
    }
    
    return res;
}
    
Node *flatten(Node *root)
{
    if(root == NULL or root->next == NULL)
        return root;
        
    Node *res = root;
    while(root->next)
    {
        res = merge(res, root->next);
        root = root->next;
    }
    
    return res;
}

// concept is merging two sorted link list