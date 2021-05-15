class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n)
    {
        vector<int> res;
        res.push_back(arr[n-1]);
        
        int leader = arr[n-1];
        for(int i=n-2; i>=0; i--)
        {
            if(arr[i] >= leader)
            {
                leader = arr[i];
                res.push_back(arr[i]);
            }
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};

// complexity O(n)