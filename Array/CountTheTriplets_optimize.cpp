class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    sort(arr, arr+n);
	    
	    int count = 0;
	    
        for(int k = n-1; k>1; k--)
        {
            int sum = arr[k];
            int i = 0, j = k-1;
            
            while(i < j)
            {
                if(sum == arr[i] + arr[j])
                {
                    count++;
                    i++;
                    j--;
                }
                else if(arr[i] + arr[j] < sum)
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }
        }
	    
	    return count;
	}
};