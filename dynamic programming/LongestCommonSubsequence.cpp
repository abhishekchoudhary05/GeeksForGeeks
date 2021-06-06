class Solution
{
    public:
    int lcs(int n, int m, string s1, string s2)
    {
        int dp[n+1][m+1];
        memset(dp, 0, sizeof(dp));
        
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(s1[i-1] == s2[j-1])
                    dp[i][j] =  1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[n][m];
    }
};


// time complexity O(n^2)
// space complexity O(n^2)