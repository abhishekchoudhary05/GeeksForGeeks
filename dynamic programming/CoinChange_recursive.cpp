class Solution
{
  public:
    long long int count( int arr[], int n, int sum)
    {
        if(sum == 0)
            return 1;
            
        if(n == 0)
            return 0;
            
        if(arr[n-1] > sum)
            return count(arr, n-1, sum);
        else
            return count(arr, n-1, sum) + count(arr, n, sum-arr[n-1]);
    }
};