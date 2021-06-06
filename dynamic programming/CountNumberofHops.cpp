class Solution
{
    public:
    long long countWays(int n)
    {
        long long dp[n+1];
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        
        for(int i=3; i<=n; i++)
            dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % 1000000007;

        return dp[n];
    }
};

// time complexity O(n)
// space complexity O(n)