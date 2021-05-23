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