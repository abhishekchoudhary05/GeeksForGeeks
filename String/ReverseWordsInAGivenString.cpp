class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        stack<string> st;
        
        string str = "";
        for(int i=0; i<S.length(); i++)
        {
            if(S[i] == '.')
            {
                st.push(str);
                str = "";
            }
            else
            {
                str = str + S[i];
            }
        }
    
        if(S[S.length()-1] != '.')
            st.push(str);
        
        string res = "";
        while(!st.empty())
        {
            res = res + st.top();
            st.pop();
            res = res + ".";
        }
        
        res[res.length()-1] = '\0';
        return res;
    } 
};