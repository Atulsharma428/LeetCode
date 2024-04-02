// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;
// int main(){
// int x = 2340, a, ans = 0;
// bool neg = false;
// if (x<0)
// {
//     x = -x;
//     cout<<"was negative\n";
//     neg= true;
// }
// // cout<<x<<endl;
// while (x!=NULL)
// {
//     a=x%10;          // 321
//     x=x/10;
//     ans = ans*pow(10,1) + a;
//     // cout<<a<<" ";
// }
// if (neg)
// {
//     ans= -ans;
// }
// if(ans>INT_MAX || ans<INT_MIN) return 0;
// cout<<endl<<ans;

// }
//                                      leet code sol
class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while (x)
        {
            ans = ans*10 + x%10;
            x=x/10;
        }
        if(ans>INT_MAX || ans<INT_MIN) return 0;
        return int(ans);
    }
};