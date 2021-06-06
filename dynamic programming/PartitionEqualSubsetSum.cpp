class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        int range = 0;
        for(int i=0; i<N; i++)
            range = range + arr[i];
            
        if(range % 2 == 1)
            return 0;
            
        range = range / 2;
        
        // logic of is subset there with given sum = range
        bool dp[N+1][range+1];
        
        for(int i=0; i<=N; i++)
            dp[i][0] = true;

        for(int i=1; i<=range; i++)
            dp[0][i] = false;
        
        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=range; j++)
            {
                if(arr[i-1] > j)
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
        }
        
        return dp[N][range] ? 1 : 0;
    }
};