class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        long long count = 0;
        for(long long i=1; i<N; i++)
        {
            for(long long j=0; j<i; j++)
            {
                if(arr[j] > arr[i])
                    count++;
            }
        }
        
        return count;
    }

};