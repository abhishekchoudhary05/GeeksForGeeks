class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) 
    {
        long long sum = 0;
        
        for(int i=0; i<array.size(); i++)
        {
            sum = sum + array[i];
        }
        
        return (n*(n+1)/2)-sum;
    }
};

// Complexity : o(n)