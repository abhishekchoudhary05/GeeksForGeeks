class Solution
{
    public:
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        if(n <= 0)
            return 0;
            
        int a = 1 + maximizeTheCuts(n-x, x, y, z);
        int b = 1 + maximizeTheCuts(n-y, x, y, z);
        int c = 1 + maximizeTheCuts(n-z, x, y, z);
        
        return max(a, max(b, c));
    }
};