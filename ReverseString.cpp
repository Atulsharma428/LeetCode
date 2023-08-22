#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // cout << "\n"<< s;
            string temp = "", ans = "";
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != ' ')
                {
                    temp += s[i];
                }
                else if (s[i] == ' ' && temp != "")
                {
                    ans = temp + " " + ans;
                    temp = "";
                }
                else
                {
                    continue;
                }
            }
            if (temp != "")
            {
                ans = temp + " " + ans;
            }
        
    cout << "\nresult is: "<< ans;
}
