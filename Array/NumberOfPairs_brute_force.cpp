class Solution{
    public:
    long long countPairs(int X[], int Y[], int M, int N)
    {
        int count = 0;
        
        for(int i=0; i<M; i++)
        {
            int x = X[i];

            for(int j=0; j<N; j++)
            {
                int y = Y[j];
                
                if(pow(x, y) > pow(y, x))
                    count++;
            }
        }
        
        return count;
    }
};
