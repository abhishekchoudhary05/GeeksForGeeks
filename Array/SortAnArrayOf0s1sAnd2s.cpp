class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int arr[3] = {0, 0, 0};
        
        for(int i=0; i<n; i++)
            arr[a[i]]++;
        
        int k = 0;
        for(int i=0; i<3; i++)
        {
            while(arr[i] != 0)
            {
                a[k++] = i;
                arr[i]--;
            }
        }
    }
};

// complexcity = O(n)