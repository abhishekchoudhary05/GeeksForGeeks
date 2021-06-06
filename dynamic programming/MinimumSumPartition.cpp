class Solution{

	public:
	int minimum(int a, int b){
	    return a < b ? a : b;
	}
	
	int minDiffernce(int arr[], int n) 
	{ 
	    int range = 0;
	    for(int i=0;i<n;i++){
	        range = range + arr[i];
	    }
	    
	    //Subset Sum code
	    bool T[n+1][range+1];
	    for(int i=1;i<range+1;i++){
	        T[0][i] = false;
	    }
	    for(int i=0;i<n+1;i++){
	        T[i][0] = true;
	    }
        for (int i = 1; i <= n; i++) { 
            for (int j = 1; j <= range; j++) { 
                if (j < arr[i - 1]) 
                    T[i][j] = T[i - 1][j]; 
                if (j >= arr[i - 1]) 
                    T[i][j] = T[i - 1][j] || T[i - 1][j - arr[i - 1]]; 
            } 
        } 
        
        vector<int> vt;
        for(int i=0;i<=range/2;i++){
            if(T[n][i]){
                vt.push_back(i);
            }
        }
        
        int min = INT_MAX;
        for(int i=0; i<vt.size(); i++){
            min = minimum(min, range - 2*vt[i]);
        }
        
        return min;
	    // Your code goes here
	} 
};