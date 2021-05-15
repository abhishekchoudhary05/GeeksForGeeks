bool Check(string str, int i, string x)
{
    int j = 0;
    while(str[i] == x[j] and j < x.length())
    {
        i++;
        j++;
    }
    
    if(j == x.length())
        return true;
    else
        return false;
}

//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == x[0])
        {
            if(Check(s, i, x))
                return i;
        }
    }
    
    return -1;
}