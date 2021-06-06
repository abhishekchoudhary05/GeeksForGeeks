class Solution
{
  public:
    int minOperation(int n)
    {
        int count = 0;
        
        while(n != 0)
        {
            if(n % 2 == 1)
            {
                count++;
                n--;
                continue;
            }
            
            n = n/2;
            count++;
        }
        
        return count;        
    }
};