// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         string temp;
//         bool res;
//         char a;
//         int i=0,j=0;
//         while( s[i]!=goal[j])
//             i++;
//         for(int k = i; k<s.length(); k++){
//             a = s[k];
//             temp.push_back(a); 
//         }
//         for(int k = 0; k<i; k++){
//             a = s[k];
//             temp.push_back(a); 
//         }
//         if(temp!=goal)
//             return false;
//         else 
//             return true;
//     }
// };

/*************************   OR   ********************************/
class Solution {
public:
bool rotateString(string A, string B) {       
    return A.size() == B.size() && (A + A).find(B) != string::npos;
}    
};