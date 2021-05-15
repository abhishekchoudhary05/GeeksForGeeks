class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n)
    {
        int maxSum = 0;
        
        for(int i=0; i<n; i++)
        {
            int sum = arr[i];
            if(sum > maxSum)
                maxSum = sum;
                
            for(int j=i+1; j<n; j++)
            {
                sum = sum + arr[j];
                
                if(sum > maxSum)
                    maxSum = sum;
            }
        }
        
        return maxSum;
    }
};