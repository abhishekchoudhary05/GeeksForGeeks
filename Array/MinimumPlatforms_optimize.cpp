// standard problem - we should be knowing approach for this

class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr, arr+n);
        sort(dep, dep+n);
        
        int count = 1, maxCount = 1;
        int i = 1;
        int j = 0;
        
        while(i < n and j < n)
        {
            if(arr[i] > dep[j])
            {
                j++;
                count--;
            }
            else
            {
                i++;
                count++;
                if(count > maxCount)
                    maxCount = count;
            }
        }
        
        return maxCount;
    }
};