class Solution
{
public:
    int maxSubArray(vector<int> &v)
    {
        int sum = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i];
            maxi = max(maxi, sum);
            if (sum < 0)
                sum = 0;
        }
        return maxi;
    }
};