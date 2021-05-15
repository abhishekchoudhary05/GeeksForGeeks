class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            long long arr[n+m] = {0};
            
            int j = 0;
            for(int i=0; i<n; i++)
            {
                arr[j] = arr1[i];
                j++;
            }
            for(int i=0; i<m; i++)
            {
                arr[j] = arr2[i];
                j++;
            }
            
            sort(arr, arr+n+m);
            
            j=0;
            for(int i=0; i<n; i++)
            {
                arr1[i] = arr[j];
                j++;
            }
            for(int i=0; i<m; i++)
            {
                arr2[i] = arr[j];
                j++;
            }            
        } 
};

// brute force - with extra space :)
//complexity O(max(n, m))
//space complexity O(n+m)