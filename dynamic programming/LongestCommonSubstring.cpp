class Solution{
    public:
    
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        int dp[n+1][m+1];
        memset(dp, 0, sizeof(dp));
        int count = -99999;
        
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(s1[i-1] == s2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                    count = max(count, dp[i][j]);
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        
        if(count == -99999)
            return 0;
        else
            return count;
    }
};

// time complexity O(n^2)
// space complexity O(n^2)