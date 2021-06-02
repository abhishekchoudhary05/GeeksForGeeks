class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
        int i;
        
        for(i=0; i<n; i++)
        {
            if(p[i].petrol >= p[i].distance)
            {
                int j = i + 1, t = n - 1;
                int fuel = p[i].petrol - p[i].distance;
                
                while(t)
                {
                    if(j == n)
                        j = 0;

                    fuel = fuel + (p[j].petrol - p[j].distance);
                        
                    if(fuel < 0)
                        break;
                        
                    j++;
                    t--;
                }
                
                if(t == 0)
                    return i;
            }
        }
        
        return -1;
    }
};

// time complexity O(n^2)