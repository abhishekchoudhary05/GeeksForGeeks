void Inorder(Node *root, vector<int> &vt){
    if(root==NULL){
        return;
    }
    Inorder(root->left, vt);
    vt.push_back(root->data);
    Inorder(root->right, vt);
}

// return true if the given tree is a BST, else return false
bool isBST(Node* root) {
    if(root == NULL){
        return true;
    }
    if(root->left==NULL && root->right==NULL){
        return true;
    }
    
    vector<int> vt;
    Inorder(root, vt);
    auto itr = vt.begin();
    int temp = *itr;
    itr++;
    
    for(;itr!=vt.end();itr++){
        if(*itr <= temp){
            return false;
        }
        temp = *itr;
    }
    
    return true;
    // Your code here
}

// Inorder traversal of BST should be sorted 

// if you are thinking of recursive solution like below, it will not work for case like (3, 2, 5, 1, 4)
//                  3
//          2               5
//      1       4

/*  -- NOT CORRECT
    bool isBST(Node* root) 
    {
        if(root == NULL)
            return true;
            
        if(root->left == NULL and root->right == NULL)  
            return true;
            
        Node *left = root->left;
        Node *right = root->right;
            
        if(left != NULL and left->data >= root->data)
            return false;
        
        if(right != NULL and right->data <= root->data)
            return false;
        
        bool l = isBST(root->left);
        bool r = isBST(root->right);
        return l and r;
    }
*/