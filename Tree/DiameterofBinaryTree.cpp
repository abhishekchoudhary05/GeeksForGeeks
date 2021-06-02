class Solution
{
    public:
    int Height(Node* root)
    {
        if(root == NULL)
            return 0;
            
        int left = Height(root->left);
        int right = Height(root->right);
        return max(left, right) + 1;
    }
    
    void Check(Node* root, vector<int> &vt)
    {
        if(root == NULL)
            return;
            
        int left = Height(root->left);
        int right = Height(root->right);
        vt.push_back(left+right+1);
        
        Check(root->left, vt);
        Check(root->right, vt);
    }
    
    int diameter(Node* root)
    {
        vector<int> vt;
        Check(root, vt);
        
        int max = INT_MIN;
        for(int i=0; i<vt.size(); i++)
        {
            if(vt[i] > max)
            {
                max = vt[i];
            }
        }
        return max;
    }
};