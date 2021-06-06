class Solution
{
  public:
    int minOperation(int n)
    {
        int dp[n];
        memset(dp, 0, sizeof(dp));
        
        for(int i=1; i<=n; i++)
        {
            if(i%2 == 0)
                dp[i] = dp[i/2] + 1;
            else
                dp[i] = dp[i-1] + 1;
        }
        
        return dp[n];
    }
};