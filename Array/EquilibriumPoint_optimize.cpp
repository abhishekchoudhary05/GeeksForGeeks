class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1) return 1;
        int res=-1;
        
        for(int i=1;i<n;i++)
        {
            a[i]+=a[i-1];
            
        }
        
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[n-1]-a[i+1])
            {
                res=i+2;
                break;
            }
            
        }
        return res;
    }

};

//comlexity O(n)