class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        if(x[0] == ')' or x[0] == '}' or x[0] == ']')
            return false;
        
        stack<char> st;
        for(int i=0; i<x.length(); i++)
        {
            if(x[i] == '[' or x[i] == '{' or x[i] == '(')
                st.push(x[i]);
                
            else if(x[i] == ')' or x[i] == '}' or x[i] == ']')
            {
                if(st.empty())
                    return false;
                    
                char c = st.top();
                
                if((x[i] == ')' and c == '{') or (x[i] == ')' and c == '['))
                    return false;
                else if((x[i] == '}' and c == '(') or (x[i] == '}' and c == '['))
                    return false;
                else if((x[i] == ']' and c == '(') or (x[i] == ']' and c == '{'))
                    return false;
                else
                    st.pop();
            }
        }
        
        if(!st.empty())
            return false;
        else
            return true;
    }
};

// time complexity O(n)