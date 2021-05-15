class Solution
{
	public:
    	void Check(string str, int l, int r, vector<string> &res)
    	{
    	    if(l == r)
    	    {
    	        res.push_back(str);
    	    }
    	    else{
    	        for(int i=l; i<=r; i++)
    	        {
    	            swap(str[l], str[i]);
    	            Check(str, l+1, r, res);
    	            swap(str[l], str[i]);
    	        }
    	    }
    	}
	
		vector<string>find_permutation(string S)
		{
		    vector<string> res;
            
            Check(S, 0, S.length()-1, res);
            sort(res.begin(), res.end());
            
            return res;
		}
};
