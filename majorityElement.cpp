#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> v = { 2, 2, 1, 1, 1, 2, 2 };
    unordered_map<int, int> map;
    for (int i = 0; i < v.size(); i++)
    {
        map[v[i]]++;
        }
        for (auto it : map)
        {
            if (it.second > v.size() / 2)
            {
                cout <<it.first;
            }
        }
        cout<< -1;
    }