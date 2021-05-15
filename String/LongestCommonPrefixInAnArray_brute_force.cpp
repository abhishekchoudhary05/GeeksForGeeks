class Solution{
    public:
    int prefixCount(string st1, string st2)
    {
        int i = 0;
        int count = 0;
        
        while(st1[i] == st2[i])
        {
            i++;
            count++;
        }
        
        return i == 0 ? -1 : count;
    }
    
    string longestCommonPrefix (string arr[], int N)
    {
        if(N == 1)
            return arr[0];
            
        int min = INT_MAX;
        
        for(int i=0; i<N-1; i++)
        {
            int j=0;
            string st1 = arr[i];
            string st2 = arr[i+1];
            
            int count = prefixCount(st1, st2);
            if(count == -1)
                return "-1";
                
            if(count < min)
                min = count;
        }
        
        if(min == INT_MAX)
            return "-1";
        else    
            return arr[0].substr(0, min);
    }
};