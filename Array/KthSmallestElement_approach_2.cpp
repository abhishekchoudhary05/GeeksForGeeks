class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) 
    {
        set<int> res;
        
        for(int i=l; i<=r; i++)
            res.insert(arr[i]);
            
        auto itr = res.begin();
        
        while(--k)
            itr++;
            
        return *itr;
    }
};

// space complexity O(n)
// time complexity O(n)