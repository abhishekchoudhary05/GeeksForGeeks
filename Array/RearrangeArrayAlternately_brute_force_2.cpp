class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    {
        vector<int> array;

        int i = 0;
        int j = n-1;
        while(i < j)
        {
            array.push_back(arr[j]);
            array.push_back(arr[i]);
            j--;
            i++;
        }
        
        if(i == j)
            array.push_back(arr[j]);            
        
        for(i = 0; i<n; i++)
            arr[i] = array[i];
    }
};