int findElement(int arr[], int n) 
{
    if(n == 1)
        return arr[0];
        
    for(int k=1; k<=n-2; k++)
    {
        int i;
        for(i=0; i<k; i++)
        {
            if(arr[i] > arr[k])
                break;
        }
        
        int j;
        for(j=k+1; j<n; j++)
        {
            if(arr[j] < arr[k])
                break;
        }
        
        if(i==k and j==n)
            return arr[i];
    }
    
    return -1;
}