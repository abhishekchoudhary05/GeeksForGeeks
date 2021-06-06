class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        vector<int> result;
        if(root == NULL)
            return result;
            
        queue<pair<Node *, int>> qu;
        qu.push({root, 0});
        multimap<int, int> mp;
        
        while(!qu.empty())
        {
            pair<Node *, int> p = qu.front();
            qu.pop();
            
            int index = p.second;
            Node *temp = p.first;
            
            mp.insert(pair<int, int> (index, temp->data));
            
            if(temp->left)
                qu.push({temp->left, index-1});
                
            if(temp->right)
                qu.push({temp->right, index+1});
        }
        
        for(auto itr=mp.begin(); itr!=mp.end(); itr++)
        {
            
            result.push_back(itr->second);
        }
        return result;        
    }
};

// time complexity O(n)
// space complexity O(n)