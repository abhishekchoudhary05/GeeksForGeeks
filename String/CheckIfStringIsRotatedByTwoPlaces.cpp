class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        if(str1.length() != str2.length())
            return false;
        
        int n = str1.length();
        if(n == 2)
            return true;

        if(n == 1 and str1[0] == str2[0])
            return true;
        if(n == 1 and str1[0] != str2[0])
            return false;        
        
        string temp1 = str1.substr(2) + str1.substr(0, 2);
        if(temp1 == str2)
            return true;
            
        string temp2 = str1.substr(n-2) + str1.substr(0, n-2);
        if(temp2 == str2)
            return true;            
            
        return false;    
    }

};