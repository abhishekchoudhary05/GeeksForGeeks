class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) 
    {
        sort(array.begin(), array.end());
        
        for(int i=0; i<array.size(); i++)
        {
            if(array[i] != i+1)
                return i+1;
        }
        
        return n;
    }
};

// Complexity : o(nlogn)