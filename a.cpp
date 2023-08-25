#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    string s = "egg", t = "add";
    int hash[256] = {0};
    bool thash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        if (hash[s[i]] == 0 && thash[t[i]] == 0)
        {
            // cout<<s[i]<< " "<<t[i]<<endl;
            // cout << hash[s[i]] << " " << t[i] << endl;
            hash[s[i]] = t[i];
            // cout << hash[s[i]] << " " << t[i] << endl;
            thash[t[i]] = true;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        // cout << char(hash[s[i]]) << " " << t[i] << endl;

        if (char(hash[s[i]] != t[i]))
        {
            return false;
        }
    }
    return true;
}