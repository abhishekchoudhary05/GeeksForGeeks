class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        vector<int> res;
        
        for(int i=0; i<n-1; i++)
        {
            int sum = arr[i];
            for(int j=i+1; j<n; j++)
            {
                sum = sum + arr[j];
                if(sum == s)
                {
                    res.push_back(i+1);
                    res.push_back(j+1);
                    return res;
                }
            }
        }
        
        if(arr[n-1] == s)
        {
            res.push_back(n);
            res.push_back(n);
            return res;
        }
        
        res.push_back(-1);
        return res;
    }
};