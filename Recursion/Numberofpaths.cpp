long long  numberOfPaths(int m, int n)
{
    if(m==1 || n==1){
        return 1;
    }
    
    int left = numberOfPaths(m-1, n);
    int right = numberOfPaths(m, n-1);
    return left + right;
}