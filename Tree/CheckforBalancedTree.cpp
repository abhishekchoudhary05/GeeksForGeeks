int Height(Node *root)
{
    if(root == NULL)
        return 0;
        
    int left = Height(root->left);
    int right = Height(root->right);
    return max(left, right) + 1;
}

bool isBalanced(Node *root)
{
    if(root == NULL)
        return true;
        
    int left = Height(root->left);
    int right = Height(root->right);
    
    if(abs(left-right) > 1)
        return false;
    else
        return isBalanced(root->left) and isBalanced(root->right);
}