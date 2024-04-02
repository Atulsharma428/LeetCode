// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "ab",  t = "ba";
//     int cn =0, j =0;
//         if(s.length()!= t.length())
//             return false;
//         for(int i = 0; i<s.length(); i++){
//             if(s[i]==t[j]){
//                cn++;
//                j++;
//                cout<<t[i]<<" "<<cn<<endl;
//                i = 0;
//             }
//             if(j > s.length())
//                 break;
//         }
//         cout<<cn<<endl;
//         if(cn==s.length())
//             cout<< true;
//         else 
//             cout<< false;
// }



class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        unordered_map<char, int> counts;
        for (int i = 0; i < n; i++) {
            counts[s[i]]++;
            counts[t[i]]--;
        }
        for (auto count : counts)
            if (count.second) return false;
        return true;
    }
};