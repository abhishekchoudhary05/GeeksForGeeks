class Solution
{
public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        vector<int> res;
        queue<int> qu;

        int sum = 0;
        int startIndex = 1;
        int i;

        for (i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            qu.push(arr[i]);

            if (sum == s)
            {
                res.push_back(startIndex);
                res.push_back(i + 1);
                return res;
            }
            else if (sum < s)
            {
                continue;
            }
            else
            {
                while (sum > s and !qu.empty())
                {
                    sum = sum - qu.front();
                    qu.pop();
                    startIndex++;
                }

                if (sum == s)
                {
                    res.push_back(startIndex);
                    res.push_back(i + 1);
                    return res;
                }
            }
        }

        while (sum > s and !qu.empty())
        {
            sum = sum - qu.front();
            qu.pop();
            startIndex++;
        }

        if (sum == s)
        {
            res.push_back(startIndex);
            res.push_back(i + 1);
            return res;
        }
        else
        {
            res.push_back(-1);
            return res;
        }
    }
};