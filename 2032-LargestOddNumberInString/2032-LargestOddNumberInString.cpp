// Last updated: 21/07/2026, 09:05:13
class Solution {
public:
    string largestOddNumber(string num) {
        string s = "";
        int l = num.length()-1;
        while(l!=-1){
            if(num[l]&1){
                s = num.substr(0,l+1);
                return s;
            }
            l--;
        }
        return s;
    }
};