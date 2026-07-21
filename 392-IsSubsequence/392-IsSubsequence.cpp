// Last updated: 21/07/2026, 09:06:37
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty()){
            return true;
        }
        int i = 0, j = 0;
        while(i < t.size()){
            if(t[i] == s[j] && j == s.size()-1){
                return true;
            }
            else if(t[i] == s[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return false;
    }
};