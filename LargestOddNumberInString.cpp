class Solution
{
public:
    string largestOddNumber(string num)
    {

        int l = -1;

        for (int i = 0; i < num.size(); i++)
        {
            if (num[i] % 2 != 0)
            {
                l = i;
            }
        }
        if (l != -1)
        {
            return num.substr(0, l + 1);
        }
        else
            return "";
    }
};
