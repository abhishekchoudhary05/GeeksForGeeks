class Solution{
    public:
        int Check(int num, int times)
        {
            if(times == 0)
                return 1;
                
            return num * Check(num, times-1);
        }
        
        int atoi(string str)
        {
            bool isNegative = false;
            if(str[0] == '-')
            {
                str = str.substr(1);
                isNegative = true;                
            }
                
            int num = 0;
            int i = 0;
            
            for(int j = str.length()-1; j>=0; j--)
            {
                if(str[j] < '0' or str[i] > '9')
                {
                    return -1;
                }
                
                int temp = str[j] - '0';
                num = num + temp * Check(10, i);
                i++;
            }
            
            return isNegative ? -1*num : num;
        }
};