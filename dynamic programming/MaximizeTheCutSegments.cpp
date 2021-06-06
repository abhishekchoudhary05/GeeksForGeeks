class Solution
{
    public:
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        int dp[n+1];
        memset(dp, 0, sizeof(dp));

        for(int i=1; i<=n; i++)
        {
            int a = INT_MIN, b = INT_MIN, c = INT_MIN;
            
            if(i >= x)
                a = dp[i-x];
                
            if(i >= y)
                b = dp[i-y];

            if(i >= z)
                c = dp[i-z];                

            dp[i] = max({a, b, c}) == INT_MIN ? INT_MIN : max({a, b, c}) + 1;
        }
        
        return dp[n] == INT_MIN ? 0 : dp[n];
    }
};

// time complexity O(n)
// space complexity O(n)