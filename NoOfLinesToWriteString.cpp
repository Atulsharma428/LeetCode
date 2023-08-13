class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
           vector<int>g1(2);
        int total=1;
        int pixel=0;
        char prev=s[0];
        for(char c:s){
            prev=c;
            pixel+=widths[c-'a'];
            if(pixel>100){
                total++;
                pixel=widths[prev-'a'];
            }
        }
       g1[0]=total;
       g1[1]=pixel;
       return g1;
    }
};