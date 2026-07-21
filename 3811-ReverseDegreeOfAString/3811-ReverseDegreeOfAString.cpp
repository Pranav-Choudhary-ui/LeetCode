// Last updated: 21/07/2026, 09:04:41
class Solution {
public:
    int reverseDegree(string s) {
        int value = 26;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            int ch = s[i]-'a';
            int x = value - ch;
            ans =  ans + (x*(i+1));
        }
        return ans;
    }
};