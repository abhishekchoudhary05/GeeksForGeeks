class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        int sum = arr[0];
        int low = 0;
        int high = 0;
        
        while(low < n and high < n)
        {
            if(sum == s)
            {
                return {low+1, high+1};
            }
            else if(sum < s)
            {
                high++;
                sum = sum + arr[high];
            }
            else
            {
                sum = sum - arr[low];
                low++;
            }
        }
        
        return {-1};
    }
};