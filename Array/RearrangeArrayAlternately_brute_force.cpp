    void rearrange(long long *arr, int n) 
    {
        vector<int> low;
        vector<int> high;
        
        for(int i=0; i<n; i++)
        {
            if(i < (n / 2))
            {
                low.push_back(arr[i]);
            }
            else
            {
                high.push_back(arr[i]);
            }
        }
        
        int i = 0;
        int j = high.size()-1;
        int k = 0;
        
        while(k < n and i < low.size() and j >= 0)
        {
            arr[k++] = high[j];
            arr[k++] = low[i];
            j--;
            i++;
        }
        if(j >= 0)
        {
            arr[k++] = high[j];
            j--;
        }
    }
};


// space comlexity = O(n)
// time comlexity = O(n)