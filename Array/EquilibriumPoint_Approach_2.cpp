class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) 
    {
        int arr1[n] = {0};
        int arr2[n] = {0};
        
        for(int i=0; i<n; i++)
        {
            arr1[i] = a[i];
            arr2[i] = a[i];
        }
        
        for(int i=1; i<n; i++)
            arr1[i] = arr1[i] + arr1[i-1];

        for(int i=n-2; i>=0; i--)
            arr2[i] = arr2[i] + arr2[i+1];

        for(int i=0; i<n; i++)
        {
            if(arr1[i] == arr2[i])
                return i+1;
        }
        
        return -1;
    }
};

// time complexity O(n)
// space complexity O(n)