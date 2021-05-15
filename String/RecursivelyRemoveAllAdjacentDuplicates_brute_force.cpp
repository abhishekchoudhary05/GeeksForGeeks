class Solution{
public:
    string removeUtils(string s)
    {
        string res = "";
        int i=0;
        
        while(i < s.length())
        {
            if(s[i] != s[i+1])
            {
                res = res + s[i];
                i++;
            }
            else
            {
                while(s[i] == s[i+1])
                {
                    i++;
                }
                i++;
            }
        }
        
        return res;        
    }
    
    string remove(string s)
    {
        string res = s;
        string temp = "";
        
        while(temp.size() != res.size())
        {
            temp = res;
            res = removeUtils(res);
        }
        
        return res;
    }
};