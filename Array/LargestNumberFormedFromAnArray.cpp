class Solution{
public:
    static bool comp(string s1, string s2)
    {
        return s1+s2 > s2+s1;
    }

	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(vector<string> &arr) 
	{
	    sort(arr.begin(), arr.end(), comp);
	    
	    string res = "";
	    for(int i=0; i<arr.size(); i++)
	    {
	        res = res + arr[i];
	    }
	    
	    return res;
	}
};

// complexity O(nlogn)
// here important point is 3rd parameter in sort STL
 