class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n)
    {
        vector<int> res;
        
        for(int i=0; i<n-1; i++)
        {
            int j;
            for(j=i+1; j<n; j++)
            {
                if(arr[i] < arr[j])
                    break;
            }
            
            if(j == n)
                res.push_back(arr[i]);
        }
        
        res.push_back(arr[n-1]);
        
        return res;
    }
};

//complexity O(n^2)