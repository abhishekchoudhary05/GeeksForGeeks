class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) 
    {
        if(n == 1)
            return 1;
            
        long long sum = 0;
        
        for(int i=1; i<n-1; i++)
        {
            sum = sum + a[i-1];
            
            int temp = 0;
            for(int j=i+1; j<n; j++)
            {
                temp = temp + a[j];
            }
            
            if(sum == temp)
                return i+1;
        }
        
        return -1;
    }
};

//complexity O(n^2)