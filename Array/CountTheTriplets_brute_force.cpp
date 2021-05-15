class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    int count = 0;
	    
	    for(int i=0; i<n-2; i++)
	    {
	        for(int j=i+1; j<n-1; j++)
	        {
	            for(int k=j+1; k<n; k++)
	            {
	                if(
	                    arr[i] + arr[j] == arr[k] or
	                    arr[j] + arr[k] == arr[i] or
	                    arr[i] + arr[k] == arr[j]
	                    )
	                {
	                    count++;
	                }
	            }
	        }
	    }
	    
	    return count;
	}
};