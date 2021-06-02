class Solution
{
    public:
    void InOrder(Node *root, vector<int> &vt)
    {
        if(root == NULL)
        {
            vt.push_back(-1);
            return;            
        }

        vt.push_back(root->data);
        InOrder(root->left, vt);
        InOrder(root->right, vt);
    }
    
    vector<int> serialize(Node *root) 
    {
        vector<int> vt;
        InOrder(root, vt);
        return vt;
    }
    
    int index = 0;
    Node * deSerialize(vector<int> &A)
    {
        if(A.size() == index)
            return NULL;
            
        int val = A[index];
        index++;
        
        if(val == -1)
            return NULL;
            
        Node *t = new Node(val);
        t->left = deSerialize(A);
        t->right = deSerialize(A);
        
        return t;
    }
};