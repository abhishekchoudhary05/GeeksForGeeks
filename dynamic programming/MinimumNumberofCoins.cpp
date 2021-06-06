class Solution{
public:
    int Check(int total, int arr[], int n, vector<int> &res)
    {
        if(n < 0)
            return 0;
            
        if(arr[n-1] > total)
            return Check(total, arr, n-1, res);
        else
        {
            res.push_back(arr[n-1]);
            return 1 + Check(total - arr[n-1], arr, n, res);            
        }
    }
    
    vector<int> minPartition(int sum)
    {
        int currency[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};

        vector<int> res;
        int x = Check(sum, currency, 10, res);

        return res;
    }
};