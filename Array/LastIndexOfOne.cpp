class Solution{
    public:
    int lastIndex(string s) 
    {
        int index = -1;
        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i] == '1')
            {
                index = i;
                break;
            }
        }
        return index;
    }
};

//complexity O(n)
