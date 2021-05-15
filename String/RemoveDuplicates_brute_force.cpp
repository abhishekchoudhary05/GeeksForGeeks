class Solution{
public:	
		
	string removeDups(string str) 
	{
	    int arr[26] = {0};
	    string st = "";
	    
	    for(int i=0; i<str.length(); i++)
	    {
	        if(arr[str[i] - 'a'] == 1)
	            continue;
	            
	        arr[str[i] - 'a']++;
	        st = st + str[i];
	    }
	    
	    return st;
	    // Your code goes here
	}
};