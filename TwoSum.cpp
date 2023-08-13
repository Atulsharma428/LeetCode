#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i, j, n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter target: " << endl;
    int a;
    cin >> a;

for ( i = 0; i < n; i++)
{
    for ( j = i+1; j < n; j++)
    {
        if((arr[i]+arr[j])==a)
        {
            cout<<"["<<i<<","<<j<<"]";
            exit(0);
        }
    }
    
}

    return 0;
}