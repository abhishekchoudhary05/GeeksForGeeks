class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
        int start=0, fueltank=0, fuelstorage=0;
        
        for(int i=0;i<n;i++) 
        {
        	fueltank = fueltank + p[i].petrol - p[i].distance;
        
        	if(fueltank < 0) 
        	{
        		start=i+1;
        		fuelstorage=fuelstorage + fueltank;
        		fueltank=0;
        	}
        }
        
        if(fueltank + fuelstorage>=0)
        {
        	return start;
        }
        
        return -1;
    }
};

// time complexity O(n)