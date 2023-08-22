#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, res;
    int cnt=0;
    getline(cin,s);
    cout << "\n"<< s;
    for (auto c: s)
    {
        if(c=='('&& cnt ==0 ){
        //    res = res + c;                     either 
           res.push_back(c);                     // or
          cnt++;
        }
        else if (c==')' && cnt ==1)
        {
        //   res = res + c;
             res.push_back(c);
          cnt--;
        }
    }
    cout<<"\n"<<res;
    
}
