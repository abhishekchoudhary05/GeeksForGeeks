class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n)
    {
        int maxSum = 0;
        int currSum = 0;
        
        for(int i=0; i<n; i++)
        {
            currSum = currSum + arr[i];
            if(currSum > maxSum)
                maxSum = currSum;
            if(currSum < 0)
                currSum = 0;
        }
        return maxSum;
    }
};