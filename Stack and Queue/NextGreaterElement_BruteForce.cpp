class Solution{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> res;
        for(int i=0; i<n; i++)
        {
            if(i == n-1)
            {
                res.push_back(-1);
                continue;
            }
            
            long long max = INT_MIN;
            for(int j=i+1; j<n; j++)
            {
                if(arr[j] > arr[i])
                {
                    max = arr[j];
                    break;                    
                }
            }
            
            if(max == INT_MIN)
                max = -1;
            res.push_back(max);

        }
        return res;
    }
};

// time complexity O(n^2) 